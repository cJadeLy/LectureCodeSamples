#include <stdio.h>
#include <sys/types.h> 
int main(void){
     pid_t  n;
     n = fork();
     printf("This line is from n %d, getpid()=%d\n", n, getpid());               
}

