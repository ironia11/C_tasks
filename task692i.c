// Задача 692и
// Дана действительная квадратная матрица порядка n. Найти наибольшее из значений элементов,
// расположенных в заштрихованной части матрицы (рис. 39).
// https://ivtipm.github.io/Programming/Glava20/index20.htm#z692

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>

void input_matrix_size(int *n);
void generate_matrix(int n, float matr[n][n]);
void print_matrix(int n, float matr[n][n]);
float find_max(int n, float matr[n][n]);
void print_result(float max);

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

// Функция ввода размера матрицы
void input_matrix_size(int *n) {
    printf("Введите n: ");
    scanf("%d", n);
}

// Функция генерации матрицы случайными числами от -10 до 10
void generate_matrix(int n, float matr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matr[i][j] = rand() * 20.0 / RAND_MAX - 10.0;
            // нельзя rand() / RAND_MAX * 20.0 - 10.0, потому что rand() и RAND_MAX - целые
        }
    }
}

// Функция вывода матрицы на экран
void print_matrix(int n, float matr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2f ", matr[i][j]);
        }
        printf("\n");
    }
}

// Функция поиска максимального элемента в заштрихованной области
float find_max(int n, float matr[n][n]) {
    float max = -FLT_MAX;                       // минимально возможное значение для float
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n) {
                if (matr[i][j] > max)
                    max = matr[i][j];
            }
        }
    }

    return max;
}

// Функция вывода результата
void print_result(float max) {
    printf("\nНаибольшее значение в заштрихованной части: %.2f", max);
}




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