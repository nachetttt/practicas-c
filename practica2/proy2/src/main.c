#define N 255
#include <stdio.h>
#include <stdio_ext.h>jobs
#include "cadenas.h"
int main() 
{
    char cad[N];
    printf("\nIntroduce una cadena: \n");
    __fpurge(stdin);
    fgets(cad, sizeof(cad), stdin);
    printf("\nLa longitud de la cadena %s es %d", cad, mystrlen(cad));
    return 0;
}
