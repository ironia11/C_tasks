// Задача 545
// Даны натуральные n, m. Предпологается, что n человек встают в круг и получают номера, считая против часовой
// стрелки, 1, 2, ..., n. Затем, начиная c первого, также против часовой стрелки отсчитывается m-й человек 
// (поскольку люди стоят по кругу, то за n-м человеком стоит первый). Этот человек выходит из круга, после 
// чего, начиная со следующего, снова отсчитывается m-й человек и так до тех пор, пока из всего круга не 
// останется один человек. Определить его номер.
// https://ivtipm.github.io/Programming/Glava14/index14.htm#z545

#include <stdio.h>
#include <stdlib.h>
#include "unit_task545.h"

int main() {
    int n, m;
    printf("Введите n: ");
    scanf("%d", &n);
    printf("Введите m: ");
    scanf("%d", &m);
    struct Node* head = create_circular_node(1);
    struct Node* tail = head;
    for (int i = 2; i <= n; i++) {
        add_circular_node(&tail, (float)i);
    }

    struct Node* cur = head;
    int cnt = n;
    while (cnt > 1) {
        cur = remove_circular_node(cur, m);
        cnt--;
    }
    
    printf("%d", (int)(cur->data));
    free(cur);
    return 0;
}

