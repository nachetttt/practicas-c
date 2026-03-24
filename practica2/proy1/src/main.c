#include <stdio.h>
#include "area.h"
#include "aritmetica.h"
int main () {
    int a,b;
    printf("Introduce dos números enteros: ");
    scanf("%d, %d", &a, &b);
    printf("La suma de los dos números %d+%d es: %d\n", a,b, suma(a,b));
    printf("El área del rectángulo de lados %d y %d es: %d\n", a,b, rectangulo(a,b));
    return 0;
}