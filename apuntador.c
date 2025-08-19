#include <stdio.h>

int main() {
    int numero = 42;
    int *ptr = &numero; // El puntero guarda la dirección de 'numero'

    printf("Valor: %d\n", *ptr);      // Accede al valor
    printf("Direccion: %p\n", ptr);   // Muestra la dirección en memoria

    return 0;
}
