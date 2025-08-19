#include <stdio.h>

int main () {
    float x = 3.14;
    float *px = &x;

    *px = 9.81;
    printf("El nuevo valor del puntero es: %.2f\n", x);
    return 0;
}