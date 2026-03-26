#include <signal.h>
#include <stdio.h>
#include <unistd.h>
void trapper(int);
int main(int argc, char *argv[])
{
	int i;
	for(i=1;i<=9;i++)
		{signal(i, trapper);}
	printf("Identificador del proceso: %d\n", getpid() );
	pause();
	printf("Continuando el main. Agur.\n");
	return 0;
}

void trapper(int sig)
{
	printf("Señal que he recogido: %d\n", sig);
}