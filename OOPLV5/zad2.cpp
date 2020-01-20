#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

namespace David{
	class Complex{
		double re;
		double im;
	public:
		friend Complex zbroji(Complex&, Complex&);
		Complex():re(0),im(0){}
		Complex(double a, double b) : re(a), im(b){}
		double getRe()const;
		double getIm()const;
		void setRe(double);
		void setIm(double);
		double modul()const;
		friend bool operator==(const Complex& c1, const Complex& c2);
		friend bool operator!=(const Complex& c1, const Complex& c2);
		friend bool operator>(const Complex& c1, const Complex& c2);
		friend bool operator<(const Complex& c1, const Complex& c2);
		friend bool operator>=(const Complex& c1, const Complex& c2);
		friend bool operator<=(const Complex& c1, const Complex& c2);


	};
	void Complex::setRe(double a){
		re = a;
	}

	void Complex::setIm(double a){
		im = a;
	}

	double Complex::getRe()const{
		return re;
	}

	double Complex::getIm()const{
		return im;
	}

	double Complex::modul()const{
		return sqrt(re*re + im*im);
	}

	Complex zbroji( Complex& a, Complex& b){
		Complex c;
		c.re = a.getRe() + b.getRe();
		c.im = a.getIm() + b.getIm();
		return c;
	}

	bool operator==(const Complex& c1, const Complex& c2){
		return (c1.modul() == c2.modul());
	}
	bool operator!=(const Complex& c1, const Complex& c2){
		return !(c1 == c2);
	}
	bool operator>(const Complex& c1, const Complex& c2){
		return (c1.modul() > c2.modul());
	}
	bool operator<(const Complex& c1, const Complex& c2){
		return (c1.modul() < c2.modul());
	}
	bool operator>=(const Complex& c1, const Complex& c2){
		return !(c1 < c2);
	}
	bool operator<=(const Complex& c1, const Complex& c2){
		return !(c1 > c2);
	}
}

namespace Kvesic{
	class Complex{
		double re;
		double im;
	public:
		friend Complex zbroji(Complex&, Complex&);
		Complex() :re(0), im(0){}
		Complex(double a, double b) : re(a), im(b){}
		double getRe()const;
		double getIm()const;
		void setRe(double);
		void setIm(double);
		double modul()const;
		friend bool operator==(const Complex& c1, const Complex& c2);
		friend bool operator!=(const Complex& c1, const Complex& c2);
		friend bool operator>(const Complex& c1, const Complex& c2);
		friend bool operator<(const Complex& c1, const Complex& c2);
		friend bool operator>=(const Complex& c1, const Complex& c2);
		friend bool operator<=(const Complex& c1, const Complex& c2);


	};
	void Complex::setRe(double a){
		re = a;
	}

	void Complex::setIm(double a){
		im = a;
	}

	double Complex::getRe()const{
		return re;
	}

	double Complex::getIm()const{
		return im;
	}

	double Complex::modul()const{
		return sqrt(re*re + im*im);
	}

	Complex zbroji(Complex& a, Complex& b){
		Complex c;
		c.re = a.getRe() + b.getRe();
		c.im = a.getIm() + b.getIm();
		return c;
	}
	bool operator==(const Complex& c1, const Complex& c2){
		if (c1.re == c2.re)
			return (c1.im == c2.im);
		return(c1.re == c2.re);
	}
	bool operator!=(const Complex& c1, const Complex& c2){
		return !(c1 == c2);
	}
	bool operator>(const Complex& c1, const Complex& c2){
		if (c1.re == c2.re)
			return (c1.im > c2.im);
		return(c1.re > c2.re);
	}
	bool operator<(const Complex& c1, const Complex& c2){
		if (c1.re == c2.re)
			return (c1.im < c2.im);
		return(c1.re < c2.re);
	}
	bool operator>=(const Complex& c1, const Complex& c2){
		return !(c1 < c2);
	}
	bool operator<=(const Complex& c1, const Complex& c2){
		return !(c1 > c2);
	}
}


template<typename tip>
void swap(tip *a, tip *b) {
	tip temp = *a;
	*a = *b;
	*b = temp;
}

template<typename tip>
void sort(tip *p, int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (p[j] > p[j+1])
				swap(&p[j], &p[j+1]);
		}
	}
}



int main(){
	David::Complex* polje1 = new David::Complex[5];
	Kvesic::Complex* polje2 = new Kvesic::Complex[5];
	polje1[0].setRe(2);
	polje1[0].setIm(2);
	polje1[1].setRe(-2);
	polje1[1].setIm(-2);
	polje2[0].setRe(2);
	polje2[0].setIm(2);
	polje2[1].setRe(-2);
	polje2[1].setIm(-2);
	srand((unsigned)time(NULL));

	for (int i = 2; i < 5; i++){
		polje1[i].setRe(rand() % 100);
		polje1[i].setIm(rand() % 100);
		polje2[i].setRe(rand() % 100);
		polje2[i].setIm(rand() % 100);
	}
	if (polje1[0] == polje1[1])
		cout << "U prvom imeniku 2 kompleksna broja su jednaka" << endl;
	else
		cout << "U prvom imeniku 2 kompleksna broja NISU jednaka" << endl;
	if (polje2[0] == polje2[1])
		cout << "U drugom imeniku 2 kompleksna broja su jednaka" << endl;
	else
		cout << "U drugom imeniku 2 kompleksna broja NISU jednaka" << endl;
	for (int i = 0; i < 5; i++){
		cout << polje1[i].getRe() << " + " << polje1[i].getIm() << endl;
	}
	cout << endl;
	sort(polje1, 5);
	for (int i = 0; i < 5; i++){
		cout << polje1[i].getRe() << " + " << polje1[i].getIm() << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++){
		cout << polje2[i].getRe() << " + " << polje2[i].getIm() << endl;
	}
	cout << endl;


	sort(polje2, 5);

	for (int i = 0; i < 5; i++){
		cout << polje2[i].getRe() << " + " << polje2[i].getIm() << endl;
	}
	cin.get();
	return 0;
}