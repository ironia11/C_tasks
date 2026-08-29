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


// создаёт новый узел для кольцевого списка с данными data
struct Node* create_circular_node(float data) {
    struct Node* node = create_node(data);
    node->next = node; 
    return node;
}


// добавляет узел с данными data в кольцевой список
void add_circular_node(struct Node** tail, float data) {
    struct Node* new_node = create_node(data);
    struct Node* head = (*tail)->next;
    new_node->next = head; 
    (*tail)->next = new_node;
    *tail = new_node; 
}


// освобождает память, выделенную под кольцевой список из n элементов
void free_circular_list(struct Node** head, int n) {
    struct Node* cur = *head;
    struct Node* next_node;
    for (int i = 0; i < n; i++) {
        next_node = cur->next;
        free(cur);
        cur = next_node;
    }
    *head = NULL;
}


// удаляет m-й элемент из кольцевого списка
// возвращает следующий после удаленного элемент
struct Node* remove_circular_node(struct Node* current, int m) {
    struct Node* prev = current;
    for (int i = 2; i <= m - 1; i++) {
        prev = prev->next;
    }
    struct Node* remove = prev->next;
    prev->next = remove->next;
    
    if (remove == current)
        current = prev->next;
    
    free(remove);
    return current;
}