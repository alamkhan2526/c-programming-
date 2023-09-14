// Write a program to print the first N natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n;
    printf("\nEnter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;

}