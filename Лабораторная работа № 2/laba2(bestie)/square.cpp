#include <iostream>
#include <cmath>
#include "square.h"
#include "vector.h"

using namespace std;

/**
 * @brief Конструктор класса Square
 *
 * Проверяет, можно ли построить квадрат на основе трех заданных точек.
 * Если точки не образуют квадрат, выбрасывает исключение.
 *
 * @param p1_ Первая точка
 * @param p2_ Вторая точка
 * @param p3_ Третья точка
 */
Square::Square(const Point& p1_, const Point& p2_, const Point& p3_) {
    p1 = p1_;
    p2 = p2_;
    p3 = p3_;

    if (!is_square()) {
        throw "This is not a square";
    }
}

/**
 * @brief Вычисляет четвертую точку квадрата и длину стороны
 *
 * После проверки того, что три точки образуют квадрат,
 * вычисляет четвертую точку и длину стороны.
 */
void Square::calculate() {
    p4 = Point(p2.x() + p3.x() - p1.x(), p2.y() + p3.y() - p1.y());

    Vector side(p1, p2);
    a = side.lenght();
}

/**
 * @brief Проверяет, могут ли три точки образовать квадрат
 *
 * Вычисляет предполагаемую четвертую точку и проверяет:
 * 1. Все стороны равны.
 * 2. Углы между соседними сторонами прямые.
 *
 * @return true если точки образуют квадрат, false в противном случае
 */
bool Square::is_square() {
    // Вычисляем точку p4 на основе трёх заданных
    Point p4_candidate(p2.x() + p3.x() - p1.x(), p2.y() + p3.y() - p1.y());

    // Создаем векторы сторон
    Vector v1(p1, p2); // Вектор от p1 к p2
    Vector v2(p2, p3); // Вектор от p2 к p3
    Vector v3(p3, p4_candidate); // Вектор от p3 к p4_candidate
    Vector v4(p4_candidate, p1); // Вектор от p4_candidate к p1

    // Проверяем, что все стороны равны по длине
    if (!(v1 == v2 && v2 == v3 && v3 == v4)) {
        return false;
    }

    // Проверяем, что угол между соседними векторами прямой (скалярное произведение = 0)
    if (v1.scalar_prod(v2) != 0) return false;
    if (v2.scalar_prod(v3) != 0) return false;
    if (v3.scalar_prod(v4) != 0) return false;
    if (v4.scalar_prod(v1) != 0) return false;

    // Если всё верно, сохраняем p4 и считаем квадратом
    p4 = p4_candidate; // Теперь p4_candidate становится p4
    a = v1.lenght(); // Длина стороны
    return true;
}

/**
 * @brief Возвращает четвертую точку квадрата
 *
 * @return Четвертая точка квадрата
 */
Point Square::point4() const {
    return p4;
}

/**
 * @brief Вычисляет площадь квадрата
 *
 * @return Площадь квадрата
 */
double Square::area() const {
    return a * a;
}

/**
 * @brief Вычисляет периметр квадрата
 *
 * @return Периметр квадрата
 */
double Square::perimetr() const {
    return a * 4;
}