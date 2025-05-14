#pragma once
#include <iostream>
#include "vector.h"
using namespace std;
class Square {
private:
	Point p1, p2, p3, p4;
	double a = 0;

public:
	Square(const Point p1_, const Point p2_, const Point p3_);
	void calculate();
	bool is_square();
	double area();
	double perimetr();
	Point point4();
};