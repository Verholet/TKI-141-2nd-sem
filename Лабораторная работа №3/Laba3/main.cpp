#include <iostream>
#include "point.h"
#include "oval.h"
#define MAX_WIDTH 40
#define MAX_HEIGHT 60
using namespace std;
int main() {
	Oval oval(MAX_HEIGHT, MAX_WIDTH);
	cin >> oval;
	oval.draw();
	return 0;
}