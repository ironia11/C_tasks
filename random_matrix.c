#include "random_matrix.h"
#include <stdio.h>
#include <stdlib.h>


// функция заполняет матрицу случайными вещественными числами от -10 до 10
// n - количество строк, m - количество столбцов
void random_float_matrix(int n, int m, float matr[n][m]) { 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() * 20.0 / RAND_MAX - 10.0;                   // RAND_MAX = 32767 (обычно)
        }
    }
}


// функция выводит матрицу matr на экран
void print_matrix(int n, int m, float matr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%8.2f ", matr[i][j]);
        }
        printf("\n");
    }
}

