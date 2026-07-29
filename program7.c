#include<stdio.h>
int main ()
{
    int i;
    for (i = 1; i <=10; i++)
    {
        if (10 % i == 0)
        {
            printf("divisor of 10: %d\n", i);
        }
    }
    return 0;
}