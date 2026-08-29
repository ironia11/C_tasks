#pragma once

struct Node {
    float data;
    struct Node* next;
};

// создаёт новый узел связного списка с данными data
struct Node* create_node(float data);


// добавляет новый узел с данными data в хвост списка
void add_node(struct Node** tail, float data);


// выводит список на экран
void print_list(struct Node* head);


// освобождает память, выделенную под список
void free_list(struct Node** head);