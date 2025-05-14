#pragma once
#include <iostream>
#include "point.h"
using namespace std;
class Vector {
private:
	double x;
	double y;
public:
	Vector(const Point p1, const Point p2);
	double lenght();
	double scalar_prod(const Vector v);
};