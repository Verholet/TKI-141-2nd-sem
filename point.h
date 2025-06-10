#pragma once
#include <iostream>
using namespace std;
class Point {
private:
  double x_, y_;
public:
  Point(double x_arg, double y_arg);
  Point();
  double& x();
  double& y();

  double x() const;
  double y() const;

};
ostream& operator<<(ostream& out, Point other);
istream& operator>>(istream& in, Point& other);
