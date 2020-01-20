#include <iostream>
#include <cmath>
using namespace std;

class GeoIznimka : public runtime_error{
	double a, b, c;
public:
	GeoIznimka(double aa, double bb, double cc, string msg) :runtime_error(msg), a(aa), b(bb), c(cc){

	}
};

class Trokut{
	double a, b, c;
public:

	Trokut() :a(1), b(1), c(1){}
	Trokut(double aa, double bb, double cc) :a(aa), b(bb), c(cc){
		if (a >= b + c || b >= a + c || c >= a + b ||a*b*c==0)
			throw GeoIznimka(aa, bb, cc, "Nemoguc trokut");
	}
	Trokut(double x) :a(x), b(x), c(x){}
	double opseg()const{
		return a + b + c;
	}
	double povrsina()const{
		double s = (a + b + c) / 2;
		return sqrt(s*(s-a)*(s-b)*(s-c));
	}
	bool pravokutni()const{
		if (c > a && c > b)
			return(c*c == a*a + b*b);
		if (b > a && b > c)
			return(b*b == a*a + c*c);
		return(a*a == b*b + c*c);
	}
	friend bool operator==(const Trokut& t1, const Trokut& t2);

};
bool operator==(const Trokut& t1, const Trokut& t2){
	return (t1.a == t2.a && t1.b == t2.b && t1.c == t2.c);
}

int main(){
	try{
		Trokut t1(5,4,3), t2(4);
		cout << t1.opseg() << "\t" << t1.povrsina() << endl;
		cout << t2.opseg() << "\t" << t2.povrsina() << endl;
		if (t1 == t2)
			cout << "Trokuti su jednaki" << endl;
		else
			cout << "Trokuti nisu jednaki." << endl;
		if (t1.pravokutni())
			cout << "Prvi trokut je pravokutan" << endl;
		else
			cout << "Prvi trokut nije pravokutan" << endl;
		if (t2.pravokutni())
			cout << "Drugi trokut je pravokutan" << endl;
		else
			cout << "Drugi trokut nije pravokutan" << endl;
	}
	catch (const GeoIznimka& iznimka){
		cout << iznimka.what();
	}



	cin.get();
	return 0;
}