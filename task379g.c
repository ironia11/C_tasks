// Задача 379г
// Дана действительная матрица размера n x m. Определить числа b1, ..., bm, равные соответственно
// значениям средних арефметических элементов строк
// https://ivtipm.github.io/Programming/Glava11/index11.htm#z379

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int n, m;
    float sum = 0.0;
    printf("Введите n: ");
    scanf("%d", &n);
    printf("Введите m: ");
    scanf("%d", &m);

    float matr[n][m];
    float b[m];

    srand(time(0));       // инициализация генератора случайных чисел

    // заполнение матрицы случайными вещественными числами от -100 до 100
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() * 200.0 / RAND_MAX - 100.0;        // RAND_MAX = 32767 (обычно)
        }
    }

    // вывод сгенерированной матрицы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%7.2f ", matr[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < m; j++) { 
        sum = 0.0; 
        for (int i = 0; i < n; i++) {
            sum += matr[i][j];
        }
        b[j] = sum / n;
    }

    // вывод результата
    printf("\n Матрица b: ");
    for (int i = 0; i < m; i++) {
        printf("%.2f  ", b[i]);
    }

    return 0;
}