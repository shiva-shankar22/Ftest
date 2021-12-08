#include<stdio.h>
#include<unistd.h>
int main(){
     
     char *grv[]={"./temp",NULL};

     execvp(grv[0],grv);

     printf("ending \n" );

    return 0;
}