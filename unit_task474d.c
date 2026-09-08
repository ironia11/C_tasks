#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// запись в файл целых чисел b1 , ..., bn , определенных по формуле 2^i + 3^(i+1)
void write_in_file(int n, FILE * g) {
    for (int i = 1; i <= n; i++) {
        fprintf(g, "%d ", (int)(powf(2, i) + powf(3, i + 1)));
    }
}