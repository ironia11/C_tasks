#pragma once

struct Employee {
    char surname[30];
    char initials[10];
    char pnumber[20];
};

void find_employee(FILE * f, char *surname, char *initials);
