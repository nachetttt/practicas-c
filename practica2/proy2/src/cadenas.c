#include "cadenas.h"
int mystrlen(char cadena[]){
    int i=0;
    while(cadena[i] != '\0'){
        i++;
    }
    return i;
}