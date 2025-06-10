#include <iostream>
#include <cmath>
#include "vector.h"
using namespace std;
Vector::Vector(const Point& p1, const Point& p2){
  x = p2.x() - p1.x();
  y = p2.y() - p1.y();

}
double Vector::lenght() const {
  return (sqrt(pow(x, 2) + pow(y, 2)));
}
double Vector::scalar_prod(const Vector& v) const {
  return(x * v.x + y * v.y);
}
bool Vector::operator==(const Vector& other) const {
  if (fabs(lenght() - other.lenght()) < numeric_limits<double>::epsilon() and fabs(scalar_prod(other)) < numeric_limits<double>::epsilon()) {
    return true;
  }
  else {
    return false;
  }
}
bool Vector::operator!=(const Vector& other) const {
  return !((*this) == other);
}
