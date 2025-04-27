#pragma once
#include <iostream>
#include "point.h"
using namespace std;
class Square {
private:
	Point p1, p2, p3, p4;
	double a =0;

public:
	Square(Point p1_, Point p2_, Point p3_);
	void calculate();
	bool is_square();
	double area();
	double perimetr();
	Point point4();
};
