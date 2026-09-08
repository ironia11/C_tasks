#include <stdio.h>
#include <stdlib.h>
#include <float.h>


// генерация матрицы matr порядка n со случайными числами от -10 до 10
void generate_matrix(int n, float matr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matr[i][j] = rand() * 20.0 / RAND_MAX - 10.0;
            // нельзя rand() / RAND_MAX * 20.0 - 10.0, потому что rand() и RAND_MAX - целые
        }
    }
}


// вывод матрицы matr порядка n на экран
void print_matrix(int n, float matr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2f ", matr[i][j]);
        }
        printf("\n");
    }
}


// поиск максимального элемента в заштрихованной области матрицы matr порядка n
float find_max(int n, float matr[n][n]) {
    float max = -FLT_MAX;                       // минимально возможное значение для float
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n) {                    // заштрихованная область - левый верхний угол
                if (matr[i][j] > max)
                    max = matr[i][j];
            }
        }
    }

    return max;
}

