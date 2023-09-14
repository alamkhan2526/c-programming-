// Write a program to print the first N even natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,n;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    while(i<=2*n)
    {
        printf("\n%d",i);
        i+=2;
    }
    return 0;
}