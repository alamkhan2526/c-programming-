// Write a program to calculate factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,fac=1;
    printf("\n Enter the value of n");
    scanf("%d",&num);
    int n=num;

    while(n)
    {
        fac=fac*n;
        n=n-1;
    }
    printf("\n Factorial of %d is %d",num,fac);
    return 0;
}