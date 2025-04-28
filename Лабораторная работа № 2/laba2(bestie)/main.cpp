#include <iostream>
#include "point.h"
#include "vector.h"
#include "square.h"
using namespace std;
int main() {
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	Point p1(x1,y1);
	Point p2(x2, y2);
	Point p3(x3, y3);
	Square square(p1, p2, p3);
	if (square.is_square()) {
		square.calculate();
		cout << "is square" << endl;
		cout << "Area" << " " << "=" << " " << square.area() << endl;
		cout << "Perimetr" << " " << "="  <<  " " << square.perimetr() << endl;
		Point p4 = square.point4();
		cout << "Point p4" << " " << "="  << " " << p4.x << " " << p4.y << endl;
	}
	else {
		cout << "this not square" << endl;
	}
}