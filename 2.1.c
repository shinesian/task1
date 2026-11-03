#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
/**
 * @brief вычисляет площадь трапеции
 * @param o1 первое основание трапеции
 * @param o2 второе основание трапеции
 * @param h высота трапеции
 * @return площадь трапеции
 */
double p(const double o1, const double o2, const double h);

/**
 * @brief вычисляет площадь круга
 * @param r радиус круга
 * @return площадь круга
 */
double k(const double r);

/**
 * @brief считывает число с плавающей точкой с клавиатуры
 * @return считанное значение
 */
double getDouble();

/**
 * @brief проверяет, является ли значение положительным
 * @param side стороны и высота трапеции и радиус
*/
void checkSide(const double side);

/**
    * @brief точка входа в программу
    * @return 0, если программа выполнена корректно, иначе не 0
*/
int main()
{
    printf("Enter first side: \n");
    double o1 = getDouble();
    checkSide(o1);
    printf("Enter second side: \n");
    double o2 = getDouble();
    checkSide(o2);
    printf("Enter height: \n");
    double h = getDouble();
    checkSide(h);
    printf("Enter radius: \n");
    double r = getDouble();
    checkSide(r);
    printf("Trapezoid is %lf\n", p(o1, o2, h));
    printf("Circle square is %lf\n", k(r));
    return 0;
}

double p(const double o1, const double o2, const double h)
{
    return (o1 + o2)/2.0 * h;
}

double k(const double r)
{
    return M_PI * pow(r, 2);
}
double getDouble()
{
    double side = 0.0;
    if (scanf("%lf",&side) != 1)
        {
            printf("Error");
            exit(1);
        }
    return side;
}
void checkSide(const double side)
{
    if (side <= 0)
    {
        printf("Error");
        exit(1);
    }
}
