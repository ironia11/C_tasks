// задача 512
// Дан файл f1, который содержит номера телефонов сотрудников учреждения: указывается фамилия сотрудника, 
// его инициалы и номер телефона. Найти телефон сотрудника по его фамилии и инициалам.
// https://ivtipm.github.io/Programming/Glava13/index13.htm#z512

#include <stdio.h>
#include <string.h>

int main() {
    char surname[30], initials[10];
    char fsurname[30], finitials[10], pnumber[20]; 
    int found = 0;
    FILE * f = fopen("f1.txt", "r");
    printf("Введите фамилию: ");
    scanf("%s", surname);
    printf("Введите инициалы: ");
    scanf("%s", initials);

    while (fscanf(f, "%s %s %s", fsurname, finitials, pnumber) == 3) {
        if (strcmp(surname, fsurname) == 0 && (strcmp(initials, finitials) == 0)) {
            printf("%s\n", pnumber);
            found++;
        }
    }

    if (found == 0)
        printf("Сотрудник не найден");

    fclose(f);
    return 0;
}