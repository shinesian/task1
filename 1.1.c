/**
 * @brief подключаю библиотеки math.h для доступности мат выражений и stdio.h
 */

#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет значение функции A по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @return рассчитанное значение
 */
double A(const double x, const double y);

/**
 * @brief Вычисляет значение функции B по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @return рассчитанное значение
 */
double B(const double x, const double y);

/**
 * @brief точка входа в программму
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    const double x = 0.335;
    const double y = 0.025;
    printf("a = %.3f\n", A(x, y));
    printf("b = %.3f", B(x, y));
    return 0;
}

double A(const double x, const double y)
{
    return 1 + x + pow(x, 2)/2 + pow(x, 3)/3 + pow(x, 4)/4;
}

double B(const double x, const double y)
{
    return x*(sin(pow(x, 3)) + pow(cos(y), 3));
}
