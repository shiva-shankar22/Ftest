#include<stdio.h>
#include<string.h>

int main(){

     FILE *fp;

     fp= fopen("ff.txt","r");
      
      char str[100],pat[]="hello";
     while(!feof(fp)){
        fgets(str,100,fp);
        if(strstr(str,pat))
          printf("%s ",str);
     }

    return 0;
}