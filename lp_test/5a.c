#include<stdio.h>
#include<string.h>


int main(){

 char ch;
 char str[100],temp[100];

    FILE *fp;
   
   int i=0,j=0,lncnt=0;

   fp=fopen("ff.txt","r");
    
    fgets(temp,100,fp);

   while(!feof(fp)){
       fgets(str,100,fp);
       if(strcmp(str,temp)==0){
         strcpy(temp,str);
       }
       else {  printf("%s ",temp);
         strcpy(temp,str);
       }
   }
   if(strcmp(temp,str)==0)   
     printf("%s ",temp);    
  return 0;
}