#include <iostream>
#include "point.h"
#include "oval.h"
#define MAX_WIDTH 40
#define MAX_HEIGHT 60
using namespace std;
int main() {
	Point f1;
	Point f2; 
	cout << "ENTER f1 ";
	cin >> f1;
	cout << "ENTER f2 " ;
	cin >> f2;
	Oval oval(f1, f2, MAX_HEIGHT, MAX_WIDTH);
	oval.draw();



	/*Point p1(6, 5);
	Point p2(6, 6);
	Point p3 = p2 + 5;
	Point p4 = p2 - 4;
	Point p5 = p1 * 6;
	Point p6;
	cin >> p6;
	if (p1 != p2) {
		cout << "ye" << endl;
	}
	else {
		cout << "no" << endl;
	}
	cout << p3.x << " "  << p3.y << endl;
	cout << p4.x << " " << p4.y  << "  " << p5.x << " " << p5.y << endl;
	cout << p3 << p4 << p5 << endl;
	cout << p6;*/
}
