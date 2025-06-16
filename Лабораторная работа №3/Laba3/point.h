#pragma once
#include <iostream>
using namespace std;
class Point {
private:
	int x_, y_;
public:
	int x() const;
	int y() const;
	int& x();
	int& y();
	Point(int x_arg, int y_arg);
	Point();
	bool operator==(const Point& other) const;
	bool operator!=(const Point& other) const;
};
ostream& operator<<(ostream& out, const Point& other);
istream& operator>>(istream& in, Point& other);