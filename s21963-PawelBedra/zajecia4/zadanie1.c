#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main (){

	printf("PID: %d, PPID: %d\n", getpid(), getppid());
	wait ;	
	return 0;

	}

