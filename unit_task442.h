#pragma once

// вычисления расстояния между двумя точками
// x0, y0 - координаты первой точки, x, y - координаты второй точки
float distance(float x0, float y0, float x, float y);


// ввод координат (x_1, y_1), (x_2, y_2), ..., (x_n, y_n)
void input_coordinates(float X[100], float Y[100], int n);


// вычисление периметра
float calc_perimeter(float X[], float Y[], int n);
