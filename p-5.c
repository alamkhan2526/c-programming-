// Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    i=n*2-1;
    while(i>=1)
    {
        printf("\n%d",i);
        i=i-2;
    }
    return 0;
}