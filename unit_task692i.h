#pragma once

// генерация матрицы matr порядка n со случайными числами от -10 до 10
void generate_matrix(int n, float matr[n][n]);


// вывод матрицы matr порядка n на экран
void print_matrix(int n, float matr[n][n]);


// поиск максимального элемента в заштрихованной области матрицы matr порядка n
float find_max(int n, float matr[n][n]);

