// Задача 338г
// Даны натуральное число n, целые числа a1,..., a25, b1,..., bn. 
// Среди a1,..., a25 нет повторяющихся чисел, нет их и среди b1,..., bn. 
// Верно ли, что все члены последовательности a1,..., a25 входят в последовательность b1,..., bn?
// https://ivtipm.github.io/Programming/Glava10/index10.htm#z338

#include <stdio.h> 
#include <stdbool.h>
#define max_len 100


// функция для проверки на наличие повторяющихся элементов в массиве
// arr - массив, len_arr - длина массива
// выводит 1, если повторяющиеся элементы есть, и 0, если нет
bool check_duplicates(int arr[], int len_arr) {
    for (int i = 0; i < len_arr; i++) {
        for (int j = i + 1; j < len_arr; j++) {
            if (arr[i] == arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}


int main() {

    int count = 0;
    int n;
    int len_a;
    printf("Введите количество элементов в массиве a: ");
    scanf("%d", &len_a);
    printf("Введите n: ");
    scanf("%d", &n);

    if (n < 1 || n > max_len) 
    return 1;
    if (len_a < 1 || len_a > max_len) 
    return 1;

    int a[len_a];   // статический массив для a1, a2, ..., a25
    int b[n];       // автоматический массив для b1, b2, ..., bn
                    // автоматические массивы подходят не для всех компиляторов
                    // большие числа использовать нельзя

    printf("Введите %d неповторяющихся чисел массива a: ", len_a);
    for (int i = 0; i < len_a; i++) {
        if (scanf("%d", &a[i]) != 1)
        return 1;
    }              

    printf("Введите %d неповторяющихся чисел массива b: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &b[i]) != 1)
        return 1;
    }

    // проверка наличия повторяющиеся элементов в массивах
    if (check_duplicates(a, len_a) || check_duplicates(b, n))
    return 1;

    // проверка условия
    for (int i = 0; i < len_a; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                count += 1;
                break;
            }
        }
    }

    if (count == len_a) 
        printf("Верно");
    else printf("Не верно");
    return 0;
}

