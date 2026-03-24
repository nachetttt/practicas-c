#include "general.h"
int ffichnumcarac(char c, FILE * fp)
{
        int cont=0;
        char caracter;
        while ((caracter=fgetc(fp))!=EOF) {
                if (caracter==c)
                        cont++;
        }
        return cont;
}