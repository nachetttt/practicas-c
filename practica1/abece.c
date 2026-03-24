#include <stdio.h>
int main() {
    char nombre[100];
    int count =0;
    printf("Introduce el nombre del fichero a crear:");
    scanf("%s", nombre);

    FILE *file = fopen(nombre, "w");
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    for (char c='a'; c<='z'; c++) {
        fputc(c, file);
        count++;
    }
    fputc('\n', file);
    for (char c='A'; c<='Z'; c++) {
        fputc(c, file);
        count++;
    }
    fputc('\n', file);
    fclose(file);
    return 0;
}