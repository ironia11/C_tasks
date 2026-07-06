// Задача 270б
// Даны символы s1,s2,... Известно, что символ s1 отличен от пробела и что среди s2,s3,... 
// имеется хотя бы один пробел. Рассматриваются s1,...,sn - символы, предшествующие первому 
// пробелу (n заранее неизвестно). Преобразовать последовательность s1,..., sn заменив все 
// малые буквы одноименными большими;
// https://ivtipm.github.io/Programming/Glava08/index08.htm#z270

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[256];
    puts("Введите строку: ");
    scanf("%[^\n]", s);
    int len = strlen(s);
    int space_index = -1;

    // находим позицию первого пробела
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            space_index = i;
            break;
        }
    }

    // преобразование букв до пробела в верхний регистер
    for (int i = 0; i < space_index; i++) {
        if (islower(s[i]))
            s[i] = toupper(s[i]);
    }

    printf("%s", s);
    return 0;
}