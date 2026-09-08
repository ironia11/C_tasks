// Задача 474д
// Дано натуральное n. Записать в файл g целые числа b1 , ..., bn , определенные по формуле 2^i + 3^(i+1)
// https://ivtipm.github.io/Programming/Glava13/index13.htm#z474

#include <stdio.h>
#include <stdlib.h>
#include "unit_task474d.h"


int main() {
    int n;
    printf("Введите n: ");
    scanf("%d", &n);
    FILE* g = fopen("numbers.txt", "w");

    write_in_file(n, g);

    fclose(g);  // используется для записи кэшированных данных из ОЗУ на диск
    return 0;
}