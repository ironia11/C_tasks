#pragma once

// вычисления расстояния между двумя точками
// x0, y0 - координаты первой точки, x, y - координаты второй точки
float distance(float x0, float y0, float x, float y);


// ввод координат
void input_coordinates(float X[100], float Y[100]);


// вычисление периметра
void calc_perimeter(float *perimeter, float X[], float Y[]);


// вывод результата
void print_result(float result);