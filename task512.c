// Задача 512
// Дан файл f1, который содержит номера телефонов сотрудников учреждения: указывается фамилия сотрудника, 
// его инициалы и номер телефона. Найти телефон сотрудника по его фамилии и инициалам.
// https://ivtipm.github.io/Programming/Glava13/index13.htm#z512

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "unit_task512.h"

int main() {
    char surname[30], initials[10];
    FILE * f = fopen("f1.txt", "r");
    printf("Введите фамилию: ");
    scanf("%s", surname);
    printf("Введите инициалы: ");
    scanf("%s", initials);

    bool found = false;
    
    struct Employee emp = find_employee(f, surname, initials, &found);

    if (found)
        printf("%s", emp.pnumber);
    else
        printf("Такого сотрудника нет");

    fclose(f);
    return 0;
}