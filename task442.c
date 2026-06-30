// Задача 442
// Даны действительные числа x1, y1, x2, y2, ..., x10, y10. Найти периметр десятиугольника,
// вершины которого имеют соответственно координаты (x1, y1), ( x2, y2), ..., (x10, y10).
// (Определить процедуру вычисления расстояния между двумя точками, заданными своими координатами).
// https://ivtipm.github.io/Programming/Glava12/index12.htm#z442

#include <stdio.h>
#include <math.h>
#define N 10


// функция для вычисления расстояния между двумя точками
// x0, y0 - координаты первой точки, x, y - координаты второй точки
// возвращает расстояние между двумя точками
float distance(float x0, float y0, float x, float y) {
    return sqrt(powf((x - x0), 2) + powf((y - y0), 2)); 
}


int main() {
    float X[100], Y[100];
    float perimeter = 0;
    for (int i = 0; i < N; i++) {
        printf("Введите x[%d] и y[%d]: ", i + 1, i + 1);
        scanf("%f %f", &X[i], &Y[i]);
    }

    for (int i = 0; i < N; i++) {
        if (i == 9) {
            perimeter += distance(X[i], Y[i], X[0], Y[0]);
            break;
        }
        perimeter += distance(X[i], Y[i], X[i+1], Y[i+1]);

    }

    printf("%.3f", perimeter);
    return 0;
}