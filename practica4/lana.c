#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

extern char **environ;  // variables de entorno actuales

int main(void)
{
    char path[1024];

    // Construir la ruta completa $HOME/lana
    char *home = getenv("HOME");
    if (!home) {
        fprintf(stderr, "No se pudo obtener $HOME\n");
        exit(EXIT_FAILURE);
    }
    snprintf(path, sizeof(path), "%s/lana", home);

    // Preparar argumentos para execve
    char *args[] = {"mkdir", path, NULL};

    // Ejecutar mkdir
    if (execve("/bin/mkdir", args, environ) == -1) {
        perror("execve");
        exit(EXIT_FAILURE);
    }

    // Nunca se llega aquí si execve tiene éxito
    puts("No debería llegar aquí");
    exit(EXIT_SUCCESS);
}