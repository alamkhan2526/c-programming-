// Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=2;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    n=n*2;
    while(n>=i)
    {
        printf("\n%d",n);
        n-=2;
    }
    return 0;
}