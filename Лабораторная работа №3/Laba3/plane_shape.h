#pragma once
#include <iostream>
#include "point.h"
using namespace std;;
class PlaneShape {
public:
	virtual string ToString() = 0;
	void draw(); 
};