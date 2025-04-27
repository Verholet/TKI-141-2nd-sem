#pragma once
#include <iostream>
#include "point.h"
#include "plane_shape.h"
using namespace std;
class Oval : public PlaneShape {
private:
	Point f1, f2;
public:
	Oval(int x1, int y1, int x2, int y2, int height, int width);
	Oval(Point f1_, Point f2_, int height, int width);
	string ToString();
};