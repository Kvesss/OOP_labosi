#include "z3.h"

int main(){
	Point2D prva(0, 0);
	Point2D druga(1, 2);
	Line pravac(prva,druga);
	pravac.ispis();
	prva.setXY(5, 5);
	pravac.setT1(prva,druga);
	pravac.ispis();
	std::cin.get();
}