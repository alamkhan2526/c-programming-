// Write a program to print cubes of the first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",i*i*i);
        i++;
    }
    return 0;
}