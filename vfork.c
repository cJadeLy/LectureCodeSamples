#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int value = 5;

int main(){
  pid_t pid;
  pid = vfork();

  if (pid>0){
    //wait(NULL);
    printf("PARENT: value = %d\n", value);
    exit(0);
  }

  
  if (pid == 0){
     value += 15;
     printf("child: value=%d\n", value);
     exit(0);
   }
  
}
