
#include <iostream>
#include <fstream>
using namespace std;
class Vektor{
	double i;
	double j;
	double k;
	friend Vektor& operator+ (Vektor&, Vektor&);
	friend bool operator==(Vektor& , Vektor& );
	friend ostream& operator<< (ostream& izlaz, Vektor& ref);
public:
	Vektor() :i(0), j(0), k(0){}
	Vektor(double a, double b, double c) :i(a), j(b), k(c){}
	double geti();
	double getj();
	double getk();

	Vektor& operator= (Vektor& x){
		return Vektor(x.geti(), x.getj(), x.getk());
	}


};


double Vektor::geti(){
	return i;
}

double Vektor::getj(){
	return j;
}

double Vektor::getk(){
	return k;
}

Vektor operator+ ( Vektor& a,  Vektor& b){
	return Vektor(a.geti() + b.geti(), a.getj() + b.getj(), a.getk() + b.getk());
}

bool operator==(Vektor& a, Vektor& b){
	return(a.geti() == b.geti() && a.getj() == b.getj() && a.getk() == b.getk());
}


ostream& operator<< (ostream& izlaz, Vektor& ref)
{
	izlaz << ref.geti() << "i\t" << ref.getj()<<"j\t"<<ref.getk()<<"k";
	return izlaz;
}

