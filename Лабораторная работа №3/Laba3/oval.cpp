#include <iostream>
#include "oval.h"
#include <sstream>
using namespace std;
Oval::Oval(int x1, int y1, int x2, int y2, int height, int width) {
    height_ = height;
    width_ = width;
    if (x1 < 0 or y1 < 0 or x2 < 0 or y2 < 0 or height < y1 or height < y2 or width < x1 or width < x2) {
        throw "Oval can't be created";
    }
    f1 = Point(x1, y1);
    f2 = Point(x2, y2);


}
Oval::Oval(const Point& f1_, const Point& f2_, int height, int width) {
    height_ = height;
    width_ = width;
    set_points(f1_, f2_);
}
string Oval::ToString() const {
    ostringstream out;
    out << "f1 =" << f1 << ", " << "f2 =" << f2;
    return out.str();
}
Oval::Oval(int height, int width) {
    height_ = height;
    width_ = width;

}
void Oval::set_points(const Point& f1_, const Point& f2_) {
    if (f1_.x() < 0 or f1_.y() < 0 or f2_.x() < 0 or f2_.y() < 0 or height_ < f1_.y() or height_ < f2_.y() or width_ < f1_.x() or width_ < f2_.x()) {
        throw "Oval can't be created";
    }
    f1 = f1_;
    f2 = f2_;
}
istream& operator>>(istream& in, Oval& other) {
    Point f1;
    Point f2;
    cout << "ENTER f1 ";
    in >> f1;
    cout << "ENTER f2 ";
    in >> f2;
    other.set_points(f1, f2);
    return in;
}