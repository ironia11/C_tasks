// Задача 65
// Дано натуральное число n (n ≤ 99). Выяснить, верно ли, что n^2 равно кубу суммы цифр числа n.
// ivtipm.github.io/Programming/Glava03/index03.htm#z65

#include <stdio.h> 

int main() {

    unsigned short n = 0;
    unsigned short n0 = 0;
    unsigned short sum = 0;

    printf("Введите n ≤ 99: ");
    scanf("%hu", &n);
    n0 = n; 

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    if (n0 * n0 == sum * sum * sum)
        printf("Верно");
    else   
    printf("Не верно");
}

