#include <iostream>
#include "square.h"
using namespace std;
int main() {
    Point p1;
    Point p2;
    Point p3;
    cin >> p1 >> p2 >> p3;
    try {
        Square square(p1, p2, p3);
        cout << "is square" << endl;
        cout << "Area" << " " << "=" << " " << square.area() << endl;
        cout << "Perimetr" << " " << "=" << " " << square.perimetr() << endl;
        Point p4 = square.point4();
        cout << "Point p4" << " " << "=" << " " << p4 << endl;
    }
    catch (...) {
        cout << "This is not square" << endl;
    }
}