// Задача 59д
// Даны действительные числа x, y. Определить, принадлежит ли точка с координатами x, y заштрихованной части плоскости
// https://ivtipm.github.io/Programming/Glava02/index02.htm#z59

#include <stdio.h>
#include <math.h>  

int main() {

    float x = 0.0;
    float y = 0.0;
    printf("Введите x: ");
    scanf("%f", &x);
    printf("Введите y: ");
    scanf("%f", &y);

    if (fabsf(2.0 * x) + fabsf(y) <= 1.0)      // если |2x| + |y| ≤ 1, точка принадлежит ромбу
        printf("Точка (%.3f ; %.3f) принадлежит заштрихованной части плоскости", x, y);
    else   
        printf("Точка (%.3f ; %.3f) не принадлежит заштрихованной части плоскости", x, y);
    return 0;
}

