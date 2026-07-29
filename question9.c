 //write a program to print the first 10 odd nnumber
 #include<stdio.h>
 int main()
 {
    int i;
    for(i=0;i<10;i++)
    {
        if(i%2!=0)
        printf("odd number:%d \n",i);
    }
    return 0;
 }