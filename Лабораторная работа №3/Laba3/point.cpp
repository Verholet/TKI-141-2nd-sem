#include <iostream>
#include"point.h"
using namespace std;
Point::Point(int x_, int y_) {
	x = x_;
	y = y_;
}
Point::Point() {
	x = 0;
	y = 0;
}
bool Point::operator==(Point other) {
	return (other.x == x) and (other.y == y);
}
bool Point::operator!=(Point other) {
	return (other.x != x) or (other.y != y);
}
Point Point::operator+(int other) {
	return Point(x + other, y +other);
}
Point Point::operator-(int other) {
	return Point(x - other, y - other);
}
Point Point::operator*(int other) {
	return Point(x * other, y * other);
}
ostream& operator<<(ostream& out, Point other) {
	out << "(" << other.x << ", " << other.y << ")";
	return (out);
}
istream& operator>>(istream& in, Point & other) {
	in >> other.x >> other.y;
	return (in);
}
