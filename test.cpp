#include<iostream>
#include<vector>
#include "basic.h"
using namespace std;


int sum(int *ar,int *arend){
    int sum=0;

    for(int *it=ar;it!=arend;it++)
          sum+=*it;

return sum;
}

int main(){
 int a=7, b=9;
 
  int ar[]={1,2,3,4};
   
   cout<<sum(ar,ar+4);

 return 0;
}