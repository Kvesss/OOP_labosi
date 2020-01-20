#include <iostream>
#include "z2.h"

int main(){
	Complex a, b;
	a.setRe(5);
	a.setIm(5);
	b.setRe(10);
	b.setIm(10);
	std::cout << "Modul1= " << a.modul() << std::endl;
	Complex c = zbroji(a, b);
	std::cout << c.getRe() << "  i" << c.getIm() << std::endl;
	std::cin.get();
	return 0;
}