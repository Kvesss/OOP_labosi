#include <iostream>
#include <conio.h>
#include <ctime>
#include "z1.h"

int main(){
	srand((unsigned)time(NULL));
	Die kocke[5];
	int i;
	for (i = 0; i < 5; i++){
		kocke[i].setRez(kocke[i].baciKockicu());
		std::cout << kocke[i].getRez() << std::endl;
	}
	for (i = 0; i < 4; i++){
		if (!(provjeri(kocke[i + 1].getRez(), kocke[i].getRez()))){
			std::cout << "Nije jamb!" << std::endl;
			_getch();
			return 0;
		}
	}
	std::cout << "Jamb!" << std::endl;
			


	/*for (i = 0; i = 10; i++){
		br = 0;
		for (int j = 0; j < 5; j++){
			kocke[i].setRez(kocke[i].baciKockicu()&&br==4);
			if (provjeri(kocke[i], vrijednost))
				std::cout << "Baèen jamb! Kockica broj: " << i << std::endl;
			vrijednost = kocke[i].getRez;
		}

	}*/
	_getch();
	return 0;
}