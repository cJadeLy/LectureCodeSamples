#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int value = 5;

int main(){
  pid_t p;
  p = fork();
  
  if (p == 0){
     value += 15;
     printf("child: value=%d\n", value);
   }
  
  if (p>0){
    wait(NULL);
    printf("PARENT: value = %d\n", value);
    exit(0);
  }
}
