#include <iostream>
#include "point.h"
using namespace std;
Point::Point(double x_arg, double y_arg) {
	x_ = x_arg;
	y_ = y_arg;
}
Point::Point() {
	x_ = 0;
	y_ = 0;
}
ostream& operator<<(ostream& out, Point other) {
	out << "(" << other.x() << ", " << other.y() << ")";
	return (out);
}
istream& operator>>(istream& in, Point& other) {
	in >> other.x() >> other.y();
	return (in);
}
double& Point::x() {
	return x_;
}
double& Point::y() {
	return y_;
}
double Point::x() const {
	return x_;
}
double Point::y() const {
	return y_;
}