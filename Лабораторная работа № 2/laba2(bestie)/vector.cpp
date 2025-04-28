#include <iostream>
#include <cmath>
#include "vector.h"
#include "point.h"
using namespace std;
Vector::Vector(Point p1, Point p2){
	x = p2.x - p1.x;
	y = p2.y - p1.y;

}
double Vector::lenght(){
	return (sqrt(pow(x, 2) + pow(y, 2)));
}
double Vector::scalar_prod(Vector v){
	return(x * v.x + y * v.y);
}