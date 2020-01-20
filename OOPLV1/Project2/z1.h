#include <stdlib.h>
class Die{
	int rez;
	friend int provjeri(Die, int);
public:
	Die(){}
	Die(int a) :rez(a){}
	int getRez()const;
	void setRez(int);
	int baciKockicu();

};

int Die::getRez()const{
	return rez;
}

void Die::setRez(int a){
	rez = a;
}

int Die::baciKockicu(){
	return rand()%6 +1;
}

int provjeri(int a,int b){
	if(a==b)
		return 1;
	return 0;
}