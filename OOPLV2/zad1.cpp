#include "zad1.h"

int main(){
	Kontakt ljudi[3] = { { "prvi", "broj", "email" }, { "drugi", "broj", "email" }, { "treci", "broj", "email" } };
	string ime;
	cin >> ime;
	ofstream ispis(ime,ios::app);
	for (int i = 0; i < 3; i++){
		ispis << ljudi[i] << endl;
	}
	cin.get();
	cin.get();
	ispis.close();
	return 0;
}