// Задача 442
// Даны действительные числа x1, y1, x2, y2, ..., x10, y10. Найти периметр десятиугольника,
// вершины которого имеют соответственно координаты (x1, y1), (x2, y2), ..., (x10, y10).
// (Определить процедуру вычисления расстояния между двумя точками, заданными своими координатами).
// https://ivtipm.github.io/Programming/Glava12/index12.htm#z442

#include <stdio.h>
#include "unit_task442.h"

int main() {
    float X[100], Y[100];
    float perim = 0.0;

    input_coordinates(X, Y);
    calc_perimeter(&perim, X, Y);
    print_result(perim);

    return 0;
}
