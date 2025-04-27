#include <iostream>
#include "square.h"
#include "vector.h"
using namespace std;
Square::Square(Point p1_, Point p2_, Point p3_) {
	p1 = p1_;
	p2 = p2_;
	p3 = p3_;
}
void Square::calculate() {
	Point result(p2.x + p3.x - p1.x, p2.y + p3.y - p1.y);
	p4 = result;
	Vector ras(p1, p2);
	a = ras.lenght();
}
bool Square::is_square() {
	Vector v1(p1, p2);
	Vector v2(p2, p3);
	Vector v3(p1, p3);
	//cout << v1.lenght() << " " << v2.lenght() << " " << v1.scalar_prod(v2) << endl;
	if (v1.lenght() == v2.lenght() and v1.scalar_prod(v2) == 0) {
		swap(p1, p2);
		return true;
	}
	else if (v2.lenght() == v3.lenght() and v2.scalar_prod(v3) == 0) {
		swap(p1, p3);
		return true;
	}
	else if (v1.lenght() == v3.lenght() and v1.scalar_prod(v3) == 0) {
		swap(p1, p1);
		return true;
	}
	else {
		return false;
	}
}
Point Square::point4() {
	return p4;
}
double Square::area() {
	return a * a;
}
double Square::perimetr() {
	return a * 4;
}
