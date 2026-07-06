// Задача 692и
// Дана действительная квадратная матрица порядка n. Найти наибольшее из значений элементов,
// расположенных в заштрихованной части матрицы (рис. 39).
// https://ivtipm.github.io/Programming/Glava20/index20.htm#z692

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "unit_task692i.h"

int main() {
    srand(time(0));  // инициализация генератора случайных чисел
    
    int n;
    input_matrix_size(&n);
    
    float matr[n][n];
    generate_matrix(n, matr);
    
    print_matrix(n, matr);
    
    float max = find_max(n, matr);
    print_result(max);
    
    return 0;
}