#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	pid_t pid;
	int sig;
	if(argc==3)
	{
		pid=(pid_t)atoi(argv[1]);
		sig=atoi(argv[2]);
	
		kill(pid, sig);
	} else {
		printf("Uso correcto:\n %s pid signal\n",  argv[0]);
		return -1;
	}
	return 0;
}
