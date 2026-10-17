
#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет площадь поверхности шара
 * @param rаdius радиус шара
 * @return Рассчитанное значение
 */
double s(const double radius);

/**
 * @brief Вычисляет обьем шара
 * @param rаdius радиус шара
 * @return Рассчитанное значение
 */
double v(const double radius);
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double radius = getDouble();
    printf("Square is %lf\n",s(radius));
    printf("Volume is %lf",v(radius));
    return 0;
}
double s(const double radius)
{
    return pow(radius, 2)*4*M_PI;
}

double v(const double radius)
{
    return pow(radius, 3)*(4.0/3.0)*M_PI;
}

double getDouble()
{
    double value = 0.0;
    printf("Введите радиус:\n");
    scanf("%lf",&value);
    return value;
}
