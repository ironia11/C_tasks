#pragma once

struct Node {
    float data;
    struct Node* next;
};

// создаёт новый узел связного списка с данными data
struct Node* create_node(float data);


// создаёт новый узел для кольцевого списка с данными data
struct Node* create_circular_node(float data);


// добавляет узел с данными data в кольцевой список
void add_circular_node(struct Node** tail, float data);


// освобождает память, выделенную под кольцевой список из n элементов
void free_circular_list(struct Node** head, int n);


// удаляет m-й элемент из кольцевого списка
// возвращает следующий после удаленного элемент
struct Node* remove_circular_node(struct Node* current, int m);