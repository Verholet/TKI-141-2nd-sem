#include <iostream>
#include "square.h"
#include "point.h"
#define MAX_WIDTH 40
#define MAX_HEIGHT 60
using namespace std;

/**
 * @brief Главная функция программы
 *
 * Создает объект Square на основе трех точек и выводит информацию о квадрате.
 */
int main() {
    try {
        // Создание квадрата
        Square square(Point(0, 0), Point(MAX_WIDTH, 0), Point(0, MAX_HEIGHT));

        // Вывод информации о квадрате
        cout << "Square properties:" << endl;
        cout << "Area: " << square.area() << endl;
        cout << "Perimeter: " << square.perimetr() << endl;
        cout << "Fourth point: " << square.point4() << endl;
    }
    catch (const char* error) {
        cout << error << endl;
    }

    return 0;
}