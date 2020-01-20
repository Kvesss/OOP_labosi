#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Vektor{
	double i;
	double j;
	double k;
	friend Vektor& operator+ (Vektor&, Vektor&);
	friend bool operator==(Vektor&, Vektor&);
	friend ostream& operator<< (ostream& izlaz, Vektor& ref);
	friend int najmanji(Vektor a[], int n);
public:
	Vektor() :i(0), j(0), k(0){}
	Vektor(double a, double b, double c) :i(a), j(b), k(c){}
	double geti();
	double getj();
	double getk();
	double modul();

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

Vektor& operator+ (Vektor& a, Vektor& b){
	return Vektor(a.geti() + b.geti(), a.getj() + b.getj(), a.getk() + b.getk());
}

bool operator==(Vektor& a, Vektor& b){
	return(a.geti() == b.geti() && a.getj() == b.getj() && a.getk() == b.getk());
}


ostream& operator<< (ostream& izlaz, Vektor& ref)
{
	izlaz << ref.geti() << "i\t" << ref.getj() << "j\t" << ref.getk() << "k";
	return izlaz;
}



int najmanji(int polje[],int n){
	int max = polje[0];
	int maxi = 0;
	for (int i = 1; i < n; i++){
		if (polje[i] > max){
			max = polje[i];
			maxi = i;
		}
	}
	return maxi;
}


int najmanji(double polje[], int n){
	double max = polje[0];
	int maxi = 0;
	for (int i = 1; i < n; i++){
		if (polje[i] > max){
			max = polje[i];
			maxi = i;
		}

	}
	return maxi;
}
double Vektor::modul(){
	return sqrt(i*i + j*j + k*k);
}


int najmanji(Vektor a[],int n){
	double max = a[0].modul();
	int maxi = 0;
	for (int i = 0; i < n; i++){
		if (a[i].modul()>max){
			max = a[i].modul();
			maxi = i;
		}
	}
	return maxi;
}

//class String{
//	string ime;
//	friend int najmanji(String polje[], int n);
//
//public:
//	string getString(){
//		return ime;
//	}
//};

int najmanji(string polje[],int n){
	int max = polje[0].length();
	int maxi = 0;
	for (int i = 0; i < n; i++){
		if (polje[i].length()>max){
			max = polje[i].length();
			maxi = i;
		}
	}
	return maxi;
}