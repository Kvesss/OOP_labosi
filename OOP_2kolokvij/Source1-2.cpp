#include <iostream>
#include <ctime>

template<typename Tip>
double unutarGranica(Tip* polje, int n, int dg, int gg) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (polje[i]<dg || polje[i]>gg)
			count++;
	}
	double postotak = (double)count / n * 100;
	return postotak;
}



class Money {
	int mAmount;
public:
	Money(int amount):mAmount(amount){ }
	Money():mAmount(0){}
	friend bool operator<(const Money& m, int n);
	friend bool operator>(const Money& m, int n);

	int getAmount()const {
		return mAmount;
	}
	void setAmount(int x) {
		mAmount = x;
	}
};
bool operator<(const Money& m, int n) {
	return (m.getAmount() < n);
}
bool operator>(const Money& m, int n) {
	return !operator<(m, n);
}

int main(void) {
	srand(time(NULL));
	Money *pare = new Money[10];
	for (int i = 0; i < 10; i++) {
		pare[i].setAmount(rand()%100);
	}
	std::cout <<unutarGranica(pare,10,50,100) << std::endl;
	std::cin.get();
}