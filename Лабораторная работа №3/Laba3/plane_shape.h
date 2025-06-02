#pragma once
#include <iostream>
#include "point.h"
using namespace std;;
class PlaneShape {
public:
	virtual string ToString() const = 0;
	void draw() const;
	~PlaneShape();

};