#pragma once

// Функция ввода размера матрицы
void input_matrix_size(int *n);


// Функция генерации матрицы случайными числами от -10 до 10
void generate_matrix(int n, float matr[n][n]);


// Функция вывода матрицы на экран
void print_matrix(int n, float matr[n][n]);


// Функция поиска максимального элемента в заштрихованной области
float find_max(int n, float matr[n][n]);


// Функция вывода результата
void print_result(float max);