#include <stdio.h>
#include <string.h>
#include "unit_task512.h"


void find_employee(FILE * f, char *surname, char *initials) {
    struct Employee emp;
    int found = 0;

    while (fscanf(f, "%s %s %s", emp.surname, emp.initials, emp.pnumber) == 3) {
        if (strcmp(surname, emp.surname) == 0 && (strcmp(initials, emp.initials) == 0)) {
            printf("%s", emp.pnumber);
            found++;
        }
    }

    if (found == 0)
        printf("Сотрудник не найден");
}