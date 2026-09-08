// Задача 136и
// Даны натуральное число n, действительные числа a1,..., an. Вычислить: a1 / 0! + a2 / 1! + ... + an / (n - 1)!
// https://ivtipm.github.io/Programming/Glava06/index06.htm#z136

#include <stdio.h>
#include "unit_task136i.h"

int main() {
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    float a1, an;
    printf("Введите 1 число: ");
    scanf("%f", &a1);
    struct Node* head = create_node(a1);   // создаём узел, в котором записано число a1
    struct Node* tail = head; 

    // сохраняем все введённые числа в связный список
    for (int i = 2; i <= n ; i++) {
        printf("Введите %d число: ", i);
        scanf("%f", &an);
        add_node(&tail, an);
    }

    // вычисляем a1 / 0! + a2 / 1! + ... + an / (n - 1)!
    float sum = 0.0;
    unsigned long fact = 1;
    struct Node* cur = head;
    for (int i = 1; i <= n; i++) {
        if (i - 1 == 0)
            fact = 1;
        else 
            fact *= (i - 1);

        sum += cur->data / fact;
        cur = cur->next;
    }

    printf("%f\n", sum);
    free_list(&head);
    return 0;
}
