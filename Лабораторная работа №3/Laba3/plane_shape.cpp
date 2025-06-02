#include <iostream>
#include "plane_shape.h"
using namespace std;
void PlaneShape::draw() const {
	cout << ToString() << endl;
}
PlaneShape::~PlaneShape() {

}