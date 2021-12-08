#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main(){

   pid_t  pid=fork();

   if(pid>0)
     sleep(5);
    else
      exit(0);
    printf("sleep completed\n");

   
    return 0;
}