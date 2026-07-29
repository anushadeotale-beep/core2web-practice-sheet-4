//write a program to print the county of numbers which are divisible by 2 and 5 between 1 to 100.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<100;i++)
    {
        if(i%2==0 && i%5==0){
            printf("conty:%d\n",i);
        }
    }
    return 0;
}