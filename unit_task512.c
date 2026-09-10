#include <stdio.h>
#include <string.h>
#include "unit_task512.h"


// принимает исходный файл f, фамилию сотрудника surname, инициалы сотрудника initials и 
// флаг is_found, значение которого false, если сотрудник не найден и true, если найден
// возвращает структуру Employee с данными об искомом сотруднике
struct Employee find_employee(FILE * f, char *surname, char *initials, bool* is_found) {
    struct Employee emp;
    bool found = false;

    while (fscanf(f, "%s %s %s", emp.surname, emp.initials, emp.pnumber) == 3) {
        if (strcmp(surname, emp.surname) == 0 && (strcmp(initials, emp.initials) == 0)) {
            found = true;
            break;
        }
    }

    *is_found = found;

    return emp;
}