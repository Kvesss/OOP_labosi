#include <iostream>

class prepaid_kartica{
private:
	double iznos;
public:
	prepaid_kartica() :iznos(0){}
	prepaid_kartica(double x) :iznos(x){}
	void setIznos(double x){
		iznos = x;
	}
	double getIznos(){
		return iznos;
	}
	void stanje();
	void nadoplati(double);
	virtual void sendSMS() = 0;
};

void prepaid_kartica::stanje(){
	std::cout << "Stanje na racunu je: " << getIznos() << std::endl;
}

void prepaid_kartica::nadoplati(double x){
	iznos += x;
}

class tele2_kartica : public prepaid_kartica{
	double cijenaSMS;
public:
	tele2_kartica() :cijenaSMS(0.50),prepaid_kartica(){}
	tele2_kartica(double x, double y) :prepaid_kartica(x), cijenaSMS(y) {}
	void sendSMS(){
		if (cijenaSMS<getIznos())
			nadoplati(-cijenaSMS);
	}

};