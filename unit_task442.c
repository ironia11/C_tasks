#include <stdio.h>
#include <math.h>
#include "unit_task442.h"


// вычисления расстояния между двумя точками
// x0, y0 - координаты первой точки, x, y - координаты второй точки
float distance(float x0, float y0, float x, float y) {
    return sqrt(powf((x - x0), 2) + powf((y - y0), 2)); 
}


// ввод координат (x_1, y_1), (x_2, y_2), ..., (x_n, y_n)
// принимает массивы X[] и Y[] для хранения координат вершин и количество вершин n
void input_coordinates(float X[], float Y[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Введите x[%d] и y[%d]: ", i + 1, i + 1);
        scanf("%f %f", &X[i], &Y[i]);
    }
}


// принимает массивы X[] и Y[] c координатами вершин и количество вершин n
// возращает периметр многоугольника
float calc_perimeter(float X[], float Y[], int n) {
    float perimeter = 0.0;
    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            perimeter += distance(X[i], Y[i], X[i+1], Y[i+1]);
        else 
            perimeter += distance(X[i], Y[i], X[0], Y[0]);
    }
    return perimeter;
}

