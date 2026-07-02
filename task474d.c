// задача 474д
// Дано натуральное n. Записать в файл g целые числа b1 , ..., bn , определенные по формуле 2^i + 3^(i+1)
// https://ivtipm.github.io/Programming/Glava13/index13.htm#z474

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    printf("Введите n: ");
    scanf("%d", &n);
    FILE * g = fopen("numbers.txt", "w");

    for (int i = 1; i < n + 1; i++) {
        fprintf(g, "%d ", (int)(powf(2, i) + powf(3, i + 1)));
    }

    fclose(g);
    return 0;
}