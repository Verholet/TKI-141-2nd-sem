#include <iostream>
#include <cmath>
#include "square.h"

using namespace std;
Square::Square(const Point& p1_, const Point& p2_, const Point& p3_) {
    p1 = p1_;
    p2 = p2_;
    p3 = p3_;
    if (is_square()) {
        calculate();
    }
    else {
        throw "this is not square";
    }

}
void Square::calculate() {
    Point result(p2.x() + p3.x() - p1.x(), p2.y() + p3.y() - p1.y());
    p4 = result;
    Vector ras(p1, p2);
    a = ras.lenght();
}
bool Square::is_square() {
    Vector v1(p1, p2);
    Vector v2(p2, p3);
    Vector v3(p1, p3);
    /*cout << v1.lenght() << " " << v2.lenght() << " " << v1.scalar_prod(v2) << endl;*/

    if (v1 == v2) {
        swap(p1, p2);
        return true;
    }
    else if (v2 == v3) {
        swap(p1, p3);
        return true;
    }
    else if (v1 == v3) {
        swap(p1, p1);
        return true;
    }
    else {
        return false;
    }
}
Point Square::point4() const {
    return p4;
}
double Square::area() const {
    return a * a;
}
double Square::perimetr() const {
    return a * 4;
}