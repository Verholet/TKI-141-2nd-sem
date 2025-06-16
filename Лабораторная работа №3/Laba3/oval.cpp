#include <iostream>
#include <string>
#include <sstream>
#include "point.h"
#include "oval.h"

Oval::Oval(int x1, int y1, int x2, int y2, int height, int width) {
    if (height <= 0 || width <= 0) {
        throw std::invalid_argument("Height and width must be positive");
    }
    if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0 ||
        height < y1 || height < y2 || width < x1 || width < x2) {
        throw std::invalid_argument("Points are out of bounds for the oval");
    }

    f1 = Point(x1, y1);
    f2 = Point(x2, y2);
    height_ = height;
    width_ = width;
}

Oval::Oval(const Point& f1_, const Point& f2_, int height, int width) {
    if (height <= 0 || width <= 0) {
        throw std::invalid_argument("Height and width must be positive");
    }
    if (f1_.x() < 0 || f1_.y() < 0 || f2_.x() < 0 || f2_.y() < 0 ||
        height < f1_.y() || height < f2_.y() || width < f1_.x() || width < f2_.x()) {
        throw std::invalid_argument("Points are out of bounds for the oval");
    }

    f1 = f1_;
    f2 = f2_;
    height_ = height;
    width_ = width;
}

Oval::Oval(int height, int width) {
    if (height <= 0 || width <= 0) {
        throw std::invalid_argument("Height and width must be positive");
    }

    f1 = Point(0, 0);
    f2 = Point(width, height);
    height_ = height;
    width_ = width;
}

void Oval::set_points(const Point& f1_, const Point& f2_) {
    if (f1_.x() < 0 || f1_.y() < 0 || f2_.x() < 0 || f2_.y() < 0 ||
        height_ < f1_.y() || height_ < f2_.y() || width_ < f1_.x() || width_ < f2_.x()) {
        throw std::invalid_argument("Points are out of bounds for the oval");
    }

    f1 = f1_;
    f2 = f2_;
}

string Oval::ToString() const {
    ostringstream out;
    out << "f1 = " << f1 << ", f2 = " << f2;
    return out.str();
}

istream& operator>>(istream& in, Oval& other) {
    Point f1;
    Point f2;

    cout << "ENTER f1: ";
    in >> f1;
    cout << "ENTER f2: ";
    in >> f2;

    try {
        other.set_points(f1, f2);
    }
    catch (const std::exception& e) {
        cerr << "Error: " << e.what() << endl;
        throw;
    }

    return in;
}