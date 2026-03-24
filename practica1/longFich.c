#include <stdio.h>
#include <stdlib.h>
int main() {
    char nombre[100];
    int count =0;
    printf("¿De qué fichero deseas conocer el tamaño?");
    scanf("%s", nombre);

    FILE *file = fopen(nombre, "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    while(fgetc(file) != EOF){
        count++;
    }
    fclose(file);
    printf("El tamaño del fichero es: %d\n", count);
    return 0;
}