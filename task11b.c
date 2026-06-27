// Задача 11б
// Даны x, y, z. Вычислить a, b
// https://ivtipm.github.io/Programming/Glava01/index01.htm#z11

#include <stdio.h>
#include <math.h>  

int main() {

    float a, b, x, y, z = 0.0;
    printf("Введите x: ");
    scanf("%f", &x);
    printf("Введите y: ");
    scanf("%f", &y);
    printf("Введите z: ");
    scanf("%f", &z);

    a = (3.0 + exp(y - 1.0)) / ((1.0 + pow(x, 2.0)) * fabs(y - tan(z)));
    b = 1.0 + fabs(y - x) + pow(y - x, 2.0) / 2.0 + pow(fabs(y - x), 3.0) / 3.0;

    printf("a = %.6f\n", a);
    printf("b = %.6f\n", b);
    return 0;
}

