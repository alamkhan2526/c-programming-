// Write a program to print the first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    while(i<=2*n-1)
    {
        printf("\n%d",i);
        i=i+2;
    }
    return 0;
}