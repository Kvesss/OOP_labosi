#include "zad2r.h"

int main(){
	Vektor a(1, 2, 3);
	Vektor b(5, 5, 5);
	Vektor c = a + b;
	cout << a << b<<"\n"<<c<<"\n";
	bool is = (b == c);
	cout << is<<endl;
	cin.get();
	cin.get();
	return 0;
}