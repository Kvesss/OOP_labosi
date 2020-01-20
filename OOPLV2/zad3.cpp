#include "zad3.h"
int main(){
	int poljeI[4] = { 1, 2, 3, 4 };
	double poljeD[4] = { 1.1, 2.2, 3.3, 4.4 };
	Vektor poljeV[3] = { { 1, 2, 3 },{2, 3, 4},{5, 5, 5} };
	string data[6] = { "a", "ab", "abc", "abcd","abcde","abcdef"};
	cout << najmanji(poljeI, 4)<<endl;
	cout << najmanji(poljeD, 4)<<endl;
	cout << najmanji(poljeV, 3)<<endl;
	cout << najmanji(data, 6);
	cin.get();
	return 0;

}
