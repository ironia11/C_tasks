// Задача 199
// Даны натуральное число n, действительные числа r, a1,...,an (n ≥ 2). Сколько среди точек (a1, an), 
// (a2, an-1),..., (an, a1) таких, которые принадлежат кругу радиуса r с центром в начале координат?
// https://ivtipm.github.io/Programming/Glava07/index07.htm#z199

#include <stdio.h> 

int main() {

    int n = 0;
    float r = 0.0;
    int count = 0;

    printf("Введите n ≥ 2: ");
    scanf("%d", &n);
    printf("Введите r: ");
    scanf("%f", &r);

    float a[n];  // массив для a1, a2, ..., an
    
    printf("Введите %d чисел: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < n; i++) {

        float x = a[i];
        float y = a[n - 1 - i];
        
        if (x * x + y * y <= r * r)             // Точка принадлежит кругу радиуса r с центром в (0,0), если x^2 + y^2 <= r^2
            count++;
    }
    
    printf("Количество точек, принадлежащих кругу: %d", count);

    return 0;
}

