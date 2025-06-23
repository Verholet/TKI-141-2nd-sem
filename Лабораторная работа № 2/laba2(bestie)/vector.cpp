#include <iostream>
#include <cmath>
#include "vector.h"

using namespace std;

/**
 * @brief Конструктор класса Vector
 *
 * Создает вектор на основе двух точек.
 *
 * @param p1 Начальная точка вектора
 * @param p2 Конечная точка вектора
 */
Vector::Vector(const Point& p1, const Point& p2) {
    x = p2.x() - p1.x();
    y = p2.y() - p1.y();
}

/**
 * @brief Вычисляет длину вектора
 *
 * @return Длина вектора
 */
double Vector::lenght() const {
    return sqrt(x * x + y * y);
}

/**
 * @brief Вычисляет скалярное произведение двух векторов
 *
 * @param v Второй вектор
 * @return Скалярное произведение
 */
double Vector::scalar_prod(const Vector& v) const {
    return x * v.x + y * v.y;
}

/**
 * @brief Проверяет, равны ли два вектора
 *
 * Векторы считаются равными, если их длины равны и они коллинеарны.
 *
 * @param other Второй вектор для сравнения
 * @return true если векторы равны, false в противном случае
 */
bool Vector::operator==(const Vector& other) const {
    // Проверяем, что векторы коллинеарны и имеют одинаковую длину
    double cross = x * other.y - y * other.x; // Векторное произведение
    return (lenght() == other.lenght() && cross == 0);
}

/**
 * @brief Проверяет, не равны ли два вектора
 *
 * @param other Второй вектор для сравнения
 * @return true если векторы не равны, false если равны
 */
bool Vector::operator!=(const Vector& other) const {
    return !(*this == other);
}