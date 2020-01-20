#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Kontakt{
	string imeprezime;
	string broj;
	string email;
	friend ostream& operator<<(ostream&, Kontakt&);
public:
	Kontakt();
	Kontakt(string, string, string);
	string getImeprezime()const;
	string getBroj()const;
	string getEmail()const;
};

Kontakt::Kontakt(string a, string b, string c) :imeprezime(a), broj(b), email(c){}

Kontakt::Kontakt() : imeprezime("Nije uneseno"), broj("Nije uneseno"), email("Nije uneseno"){}

string Kontakt::getImeprezime()const{
	return imeprezime;
}

string Kontakt::getBroj()const{
	return broj;
}

string Kontakt::getEmail()const{
	return email;
}

ostream& operator<< (ostream& izlaz, Kontakt& ref)
{
		izlaz << ref.getImeprezime() << "\n" << ref.getBroj() << "\n" << ref.getEmail() << endl;
	return izlaz;
}