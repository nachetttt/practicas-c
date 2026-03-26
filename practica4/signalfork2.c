#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void trapper(int sig)
{
	   printf("SIGUSR1\n");
}

int main(int argc, char *argv[])
{
	pid_t padre, hijo;
	padre = getpid();
	signal( SIGUSR1, trapper );
	if ( (hijo=fork()) == 0 )
	{
		/*hijo */ 
		sleep(10); 
		sleep(1);
		kill(padre, SIGUSR1);
		sleep(1);
		kill(padre, SIGUSR1);
		sleep(1);
		kill(padre, SIGKILL);
		exit(0);
	}
	else
	{ /* padre */
		 sleep(2); 
	kill(hijo, SIGUSR2); 
	for (;;);

	}
	
	return 0;
}