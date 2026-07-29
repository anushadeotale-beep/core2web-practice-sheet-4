//write a progrm to print the even numbers between 22 to 98 in reverse order.
#include<stdio.h>
int main()
{
    int i;
    for (i=98;i>=22;i--){
        if(i%2==0){
            printf("%d \n",i);
        }
    }
    return 0;
}