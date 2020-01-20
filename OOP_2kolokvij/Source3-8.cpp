﻿#include <iostream>
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
	virtual void takeDamage(int amount) = 0;
	ArmoredEnemy enemy;
public:
	IllegalEnemyException(string msg, ArmoredEnemy enemy) :runtime_error(msg), enemy(enemy) {}
};
		alocirano polje tipa Enemy popunjeno s n oklopljenih neprijateljia s nasumicno postavljenim vrijednostima ˇ
		atributa(imena postaviti u obliku ”Enemy1”, ”Enemy2”, ... do n).U slucaju poku ˇ saja stvaranja neprijatelja s ˇ
		napadom manjim od 50 podici iznimku, preko objekta iznimke ispisati informacije o neprijatelju te nastaviti ´
		stvarati neprijatelje.Bez obzira na iznimke, konacni broj neprijatelja mora biti jednak ˇ n. (za pretvaranje iz int
			u string moguce je rabiti ´ string to string(int val))*/
		duljine.Svaki neprijatelj u prvom polju napada neprijatelja na nasumicnom indeksu u drugom polju nanose ˇ ci´
		mu stetu u vrijednosti svog ˇ mAttackDamage atributa, a zatim svaki iz drugog na isti nacin napada nasumi ˇ cnog ˇ
		neprijatelja u prvom.Funkcija vraca 1 ako je vi ´ se pre ˇ zivjelih u prvom, 2 ako je vi ˇ se u drugom te 0 ako je ˇ
		broj prezivjelih jednak.Testirati funkciju dvama poljima od 5 elemenata.Pretpostaviti postojanje funkcije ˇ
		createEnemies() iz zadatka 7.
	srand((unsigned)time(NULL));