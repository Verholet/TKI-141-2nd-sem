#pragma once
#include <iostream>
#include "point.h"
#include "plane_shape.h"
using namespace std;
class Oval : public PlaneShape {
private:
	Point f1, f2;
	int height_;
	int width_;
public:
	Oval(int x1, int y1, int x2, int y2, int height, int width);
	Oval(const Point& f1_, const Point& f2_, int height, int width);
	Oval(int height, int width);
	void set_points(const Point& f1_, const Point& f2_);
	string ToString() const;
};
istream& operator>>(istream& in, Oval& other);