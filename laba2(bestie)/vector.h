#pragma once
#include <iostream>
#include "point.h"
using namespace std;
class Vector {
public:
	double x;
	double y;
	Vector(Point p1, Point p2);
	double lenght();
	double scalar_prod(Vector v);
};

