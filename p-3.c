// Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("\n %d",n);
        n--;
    }
    return 0;
}