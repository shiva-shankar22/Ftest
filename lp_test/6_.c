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

        dt=*(gmtime(&buf.st_ctim));
        
        printf("\n\n created time \n %d-%d-%d-%d-%d-%d",dt.tm_mday,dt.tm_mon,dt.tm_year+1900,dt.tm_hour,dt.tm_min,dt.tm_sec);

    }
    else
      printf("err");
}