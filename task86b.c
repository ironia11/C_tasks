// Задача 86б
// Дано натуральное число n. Чему равна сумма его цифр?
// https://ivtipm.github.io/Programming/Glava04/index04.htm#z86

#include <stdio.h>
#include <math.h>  

int main() {

    int n = 0;
    int sum = 0;

    printf("Введите n: ");
    scanf("%d", &n); 

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d", sum);
}

