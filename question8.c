//write a program where you have to count of even numbers between 2 to 200
#include<stdio.h>
int main()
{
    int i;
    int even=0;
    for(i=2;i<=200;i++)
    {
        if (i%2==0){
           
            even++;
            
        }
      
    } printf("Count of even numbers = %d", even);
    return 0;
}