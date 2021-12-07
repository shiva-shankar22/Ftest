#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<time.h>

int main(){
    int fd;
    struct stat buf; struct tm dt;

    if(stat("ff.txt",&buf)==0){
       
       if(buf.st_mode & R_OK)
              printf("\nread mode");
       if(buf.st_mode & W_OK)
             printf("\nwrite mode");
       if(buf.st_mode & X_OK)
          printf("execute mode");

        printf("\nfile sze %ld",buf.st_size);
    }
    else
      printf("err");
}