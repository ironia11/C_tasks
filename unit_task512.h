#pragma once

struct Employee {
    char surname[30];
    char initials[10];
    char pnumber[20];
};

// принимает исходный файл f, фамилию сотрудника surname, инициалы сотрудника initials и 
// флаг is_found, значение которого false, если сотрудник не найден и true, если найден
// возвращает структуру Employee с данными об искомом сотруднике
struct Employee find_employee(FILE * f, char *surname, char *initials, bool* is_found);
