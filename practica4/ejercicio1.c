#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/wait.h> 
int main(int argc,char *argv[]){ 
 int rc=0,estado; 
 if (argc!=1)
 { 
    printf("uso: %s\n",argv[0]); 
    rc=1; 
    exit(rc);
 } 
 else 
 {
    if (fork()) 
    { 
     wait(&estado); 
     printf("PADRE: pid=%8d ppid=%8d user-id=%8d  \n",getpid(), getppid(), getuid()); 
     printf("EL ESTADO DEVUELTO POR EL HIJO: %d\n", estado); 
     exit(rc);
    } 
    else { 
      printf("HIJO: pid=%8d \n", getpid());} 
      exit(rc); 
    } 
}
