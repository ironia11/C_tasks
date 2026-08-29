#include <stdio.h>
#include <stdlib.h>

struct Node {
    float data;
    struct Node* next;
};

// создаёт новый узел связного списка с данными data
struct Node* create_node(float data) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}


// добавляет новый узел с данными data в хвост списка
void add_node(struct Node** tail, float data) {
    struct Node* new_node = create_node(data);
    (*tail)->next = new_node;
    *tail = new_node;
}


// выводит список на экран
void print_list(struct Node* head) {
    struct Node* list = head;
    while (list != NULL) {
        printf("%f ", list->data);
        list = list->next;
    }
}


// освобождает память, выделенную под список
void free_list(struct Node** head) {
    struct Node* cur = *head;
    struct Node* next_node;
    while (cur != NULL) {
        next_node = cur->next;
        free(cur);
        cur = next_node;
    }
    *head = NULL;
}