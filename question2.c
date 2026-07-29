//write a program toprint the table 29
#include<stdio.h>
int main(){
    
    int i=1;
    int j=10;
    int num=29;
    int result;
    printf("table of 29:\n");
    for(i=1;i<=j;i++){
   result=num*i;
    printf("%d*%d=%d \n",num,i,result);
    
  
    }
  
    return 0;
}