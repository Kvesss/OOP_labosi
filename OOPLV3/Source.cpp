#include "prepaid_kartica.h"

int main(){
	tele2_kartica tele(50,0.50);
	prepaid_kartica *p;
	p = &tele;
	p->stanje();
	p->sendSMS();
	p->stanje();
	std::cin.get();
	return 0;
}