#include <stdio.h>
#include <sys/types.h>
int main(void){
     pid_t  pid;
     pid = fork();
	if (pid == 0) { 
		printf("This is the child\n"); 
		exit(0); 
	} 

	if (pid > 0) { 
		printf("This is parent. The child is %d\n", pid); 
		exit(0); 
	}
}

