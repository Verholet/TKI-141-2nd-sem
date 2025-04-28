#pragma once
#include <iostream>
using namespace std;
class Point {
public:
	int x, y;
	Point(int x_, int y_);
	Point();
	bool operator==(Point other);
	bool operator!=(Point other);
	Point operator+(int other);
	Point operator-(int other);
	Point operator*(int other);
};
ostream& operator<<(ostream& out, Point other);
istream& operator>>(istream& in, Point& other);
