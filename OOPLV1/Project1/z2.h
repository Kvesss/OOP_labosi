#include <cmath>
class Complex{
	double re;
	double im;
public:
	friend Complex zbroji(Complex&, Complex&);
	Complex(){}
	Complex(double a, double b) : re(a), im(b){}
	double getRe();
	double getIm();
	void setRe(double);
	void setIm(double);
	double modul();

};
void Complex::setRe(double a){
	re = a;
}

void Complex::setIm(double a){
	im = a;
}

double Complex::getRe(){
	return re;
}

double Complex::getIm(){
	return im;
}

double Complex::modul(){
	return sqrt(re*re + im*im);
}

Complex zbroji(Complex& a, Complex& b){
	Complex c;
	c.re = a.getRe() + b.getRe();
	c.im = a.getIm() + b.getIm();
	return c;
}
