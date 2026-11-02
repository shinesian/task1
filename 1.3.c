#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет общее сопротивление трёх параллельно соединённых резисторов
 * @param r1 Сопротивление первого резистора
 * @param r2 Сопротивление второго резистора
 * @param r3 Сопротивление третьего резистора
 * @return Общее сопротивление соединения
 */
double resistance(const double r1, const double r2, const double r3);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

int main()
{
    double r1 = getDouble();
    double r2 = getDouble();
    double r3 = getDouble();

    printf("Resistance is %lf", resistance(r1, r2, r3));

    return 0;
}

double resistance(const double r1, const double r2, const double r3)
{
    return 1.0 / (1.0 / r1 + 1.0 / r2 + 1.0 / r3);
}

double getDouble()
{
    double value = 0.0;
    scanf("%lf", &value);
    return value;
}
