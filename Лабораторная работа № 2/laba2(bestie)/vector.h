#pragma once
#include <iostream>
#include "point.h"
#define EPS 0.0000001
using namespace std;
class Vector {
private:
	double x;
	double y;
public:
	Vector(const Point& p1, const Point& p2);
	double lenght() const;
	double scalar_prod(const Vector& v) const;
	bool operator==(const Vector& other) const;
	bool operator!=(const Vector& other) const;

};