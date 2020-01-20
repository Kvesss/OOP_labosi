#include <iostream>
#include <string>
#include <ctime>
using namespace std;






class Enemy {
protected:
	std::string mName;
	int mHealth; // U rasponu[0 −100]
	int mAttackDamage; // U rasponu[0−100]
public:
	int getAttackDamage() const { return mAttackDamage; }
	int getHealth() const { return mHealth; }
	virtual void heal(int amount);
	virtual void takeDamage(int amount) = 0;	Enemy(string name, int attack):mName(name),mHealth(100),mAttackDamage(attack){}	Enemy():mName("JohnDoe"),mHealth(100),mAttackDamage(50){}	void Heal(int cure) {		if (mHealth > 0) {			if (mHealth + cure < 100) {				mHealth += cure;			}			else				mHealth = 100;		}		else			cout << "Enemy is dead!" << endl;	}	void setName(string name) {		mName = name;	}	void setHealth(int health) {		mHealth = health;	}	void setAttackDamage(int att) {		mAttackDamage = att;	}};class ArmoredEnemy :public Enemy {	double precision;	int ArmorHealth;public:	ArmoredEnemy(string name, int attack, double prec, int health):Enemy(name,attack),precision(prec),ArmorHealth(health){}	ArmoredEnemy(){}	virtual void takeDamage(int amount) {		double probability = (double)rand() / RAND_MAX;		if (probability < precision)			return;		else{			if (ArmorHealth >= amount)				ArmorHealth -= amount;			else {				amount -= ArmorHealth;				ArmorHealth = 0;				mHealth -= amount;			}		}	}};class IllegalEnemyException : public runtime_error {
	ArmoredEnemy enemy;
public:
	IllegalEnemyException(string msg, ArmoredEnemy enemy) :runtime_error(msg), enemy(enemy) {}
};Enemy* createEnemies(int n) {	/*Napisite funkciju ˇ createEnemies() koja na temelju predanog joj broja n vraca pokaziva ´ c na dinami ˇ cki ˇ
		alocirano polje tipa Enemy popunjeno s n oklopljenih neprijateljia s nasumicno postavljenim vrijednostima ˇ
		atributa(imena postaviti u obliku ”Enemy1”, ”Enemy2”, ... do n).U slucaju poku ˇ saja stvaranja neprijatelja s ˇ
		napadom manjim od 50 podici iznimku, preko objekta iznimke ispisati informacije o neprijatelju te nastaviti ´
		stvarati neprijatelje.Bez obzira na iznimke, konacni broj neprijatelja mora biti jednak ˇ n. (za pretvaranje iz int
			u string moguce je rabiti ´ string to string(int val))*/	ArmoredEnemy *enemies = new ArmoredEnemy[n];		for (int i = 0; i < n; i++) {		enemies[i].setName("Enemy"+to_string(i+1));		enemies[i].setHealth(rand()%101+1);		enemies[i].setAttackDamage(rand()%101+1);		if (enemies[i].getHealth() < 50)			throw IllegalEnemyException("Attack too low!", enemies[i]);	}}int runBattle(ArmoredEnemy* team1, ArmoredEnemy* team2,int n) {	/*Napisite funkciju ˇ runBattle() koja kao argumente prima dva polja neprijatelja iz zadatka 3 jednake
		duljine.Svaki neprijatelj u prvom polju napada neprijatelja na nasumicnom indeksu u drugom polju nanose ˇ ci´
		mu stetu u vrijednosti svog ˇ mAttackDamage atributa, a zatim svaki iz drugog na isti nacin napada nasumi ˇ cnog ˇ
		neprijatelja u prvom.Funkcija vraca 1 ako je vi ´ se pre ˇ zivjelih u prvom, 2 ako je vi ˇ se u drugom te 0 ako je ˇ
		broj prezivjelih jednak.Testirati funkciju dvama poljima od 5 elemenata.Pretpostaviti postojanje funkcije ˇ
		createEnemies() iz zadatka 7.		*/	for (int i = 0; i < n; i++) {		team2[rand() % n].takeDamage(team1[i].getAttackDamage());	}	for (int i = 0; i < n; i++) {		team1[rand() % n].takeDamage(team2[i].getAttackDamage());	}	int count1 = 0, count2 = 0;	for (int i = 0; i < n; i++) {		if (team1[i].getHealth)			count1++;		if (team2[i].getHealth)			count2++;	}	if (count1 > count2)		return 1;	else if (count2 > count1)		return 2;	else		return 0;}int main() {
	srand((unsigned)time(NULL));	Enemy* enemies = createEnemies(10);	cin.get();}