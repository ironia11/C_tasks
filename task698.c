// Задача 698
// Дана квадратная матрица порядка n. Получить матрицу A^2.
// https://ivtipm.github.io/Programming/Glava21/index21.htm#z698

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Введите n: ");
    scanf("%d", &n);

    float A[n][n], B[n][n];

    srand(time(0));       // инициализация генератора случайных чисел

    // заполнение матрицы случайными вещественными числами от -10 до 10
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() * 20.0 / RAND_MAX - 10.0;        // RAND_MAX = 32767 (обычно)
        }
    }

    // вывод сгенерированной матрицы A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%9.2f ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = 0;
            for (int k = 0; k < n; k++) {
                B[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    // вывод результата
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%9.2f ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}