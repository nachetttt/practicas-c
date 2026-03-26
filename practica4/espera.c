#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int sig) {
    printf("Hola\n");
}

int main() {
    signal(SIGUSR1, handler);
    printf("Identificador del proceso: %d\n", getpid());
    pause();
    return 0;
}