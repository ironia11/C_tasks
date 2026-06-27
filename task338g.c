// Задача 338г
// Даны натуральное число n, целые числа a1,..., a25, b1,..., bn. 
// Среди a1,..., a25 нет повторяющихся чисел, нет их и среди b1,..., bn. 
// Верно ли, что все члены последовательности a1,..., a25 входят в последовательность b1,..., bn?
// https://ivtipm.github.io/Programming/Glava10/index10.htm#z338

#include <stdio.h> 

int main() {

    int count = 0;
    int n;
    printf("Введите n: ");
    scanf("%d", &n);

    int a[25];  // массив для a1, a2, ..., a25
    int b[n];  // массив для b1, b2, ..., bn
    
    printf("Введите 25 неповторяющихся чисел: ");
    // scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    // &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9], &a[10], &a[11], &a[12], &a[13], 
    // &a[14], &a[15], &a[16], &a[17], &a[18], &a[19], &a[20], &a[21], &a[22], &a[23], &a[24]); 

    for (int i = 0; i < 25; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Введите %d неповторяющихся чисел: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                count += 1;
                break;
            }
        }
    }

    if (count == 25) 
        printf("Верно");
    else printf("Не верно");
    return 0;
}

