#pragma once

// функция заполняет матрицу случайными вещественными числами от -10 до 10
// n - количество строк, m - количество столбцов
void random_float_matrix(int n, int m, float matr[n][m]);

// функция выводит матрицу matr на экран
void print_matrix(int n, int m, float matr[n][m]);