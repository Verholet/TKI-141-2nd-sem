#include <iostream>
#include"point.h"
using namespace std;
Point::Point(int x_arg, int y_arg) {
	x_ = x_arg;
	y_ = y_arg;
}
Point::Point() {
	x_ = 0;
	y_ = 0;
}
int Point::x() const {
	return x_;
}
int Point::y() const {
	return y_;
}
int& Point::x() {
	return x_;
}
int& Point::y() {
	return y_;
}

bool Point::operator==(const Point& other) const {
	return (other.x_ == x_) and (other.y_ == y_);
}
bool Point::operator!=(const Point& other) const {
	return (other.x_ != x_) or (other.y_ != y_);
}
ostream& operator<<(ostream& out, const Point& other) {
	out << "(" << other.x() << ", " << other.y() << ")";
	return (out);
}
istream& operator>>(istream& in, Point& other) {
	in >> other.x() >> other.y();
	return (in);
}