// Задача 692и
// Дана действительная квадратная матрица порядка n. Найти наибольшее из значений элементов,
// расположенных в заштрихованной части матрицы (рис. 39).
// https://ivtipm.github.io/Programming/Glava20/index20.htm#z692

// #include "random_matrix.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <float.h>


// int main() {
//     srand(time(0));                         // инициализация генератора случайных чисел
//     int n;
//     float max = -FLT_MAX;
//     printf("Введите n: ");
//     scanf("%d", &n);
//     float matr[n][n];
//     random_float_matrix(n, n, matr);
//     print_matrix(n, n, matr);

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i + j < n)
//                 if (matr[i][j] > max)
//                     max = matr[i][j];
//         }
//     }

//     printf("\n%.2f", max);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>

void random_float_matrix(int n, int m, float matr[n][m]) { 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() * 20.0 / RAND_MAX - 10.0;
        }
    }
}

void print_matrix(int n, int m, float matr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%8.2f ", matr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(0));
    int n;
    float max = -FLT_MAX;
    printf("Введите n: ");
    scanf("%d", &n);
    float matr[n][n];
    random_float_matrix(n, n, matr);
    print_matrix(n, n, matr);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n)
                if (matr[i][j] > max)
                    max = matr[i][j];
        }
    }

    printf("\n%.2f", max);
    return 0;
}