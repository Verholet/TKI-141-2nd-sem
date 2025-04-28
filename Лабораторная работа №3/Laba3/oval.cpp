#include <iostream>
#include "oval.h"
#include <sstream>
using namespace std;
Oval::Oval(int x1, int y1, int x2, int y2, int height, int width) {
	if (x1 < 0 or y1 < 0 or x2 < 0 or y2 < 0 or height < y1 or height <y2 or width <x1 or width <x2) {
		throw "Oval can't be created";
		
	}
	f1 = Point(x1, y1);
	f2 = Point(x2, y2);
	
}
Oval::Oval(Point f1_, Point f2_, int height, int width) {
	if (f1_.x < 0 or f1_.y < 0 or f2_.x < 0 or f2_.y < 0 or height < f1_.y or height < f2_.y or width < f1_.x or width < f2_.x) {
		throw "Oval can't be created";
	}
	f1 = f1_;
	f2 = f2_;

}
string Oval::ToString() {
	ostringstream out;
	out << "f1 =" << f1 << ", " << "f2 =" << f2;
	return out.str();
}


