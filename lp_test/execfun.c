#include<stdio.h>
#include<unistd.h>
int main(){
     
     char *grv[]={"./tempm",NULL};

     execvp(grv[0],grv);

     printf("ending \n" );

    return 0;
}