#include <iostream>
class Point2D{
	double x;
	double y;
public:
	Point2D(){}
	Point2D(double a, double b) :x(a), y(b){}
	double getX();
	double getY();
	void setXY(double, double);


};

double Point2D::getX(){
	return x;
}

double Point2D::getY(){
	return y;
}
void Point2D::setXY(double a, double b){
	x = a;
	y = b;
}

class Line{
	Point2D t1;
	Point2D t2;
public:
	Line(Point2D a, Point2D b) : t1(a), t2(b){}
	Point2D getT1();
	Point2D getT2();
	void setT1(Point2D,Point2D);
	void ispis();
};

Point2D Line::getT1(){
	return t1;
}

Point2D Line::getT2(){
	return t2;
}


void Line::setT1(Point2D a, Point2D b){
	t1= a;
	t2= b;
}
void Line::ispis(){
	std::cout << "(" << t1.getX() << "," << t1.getY() << ")"<<"\n" << "(" << t2.getX() << "," << t2.getY() << ")" << std::endl;
}