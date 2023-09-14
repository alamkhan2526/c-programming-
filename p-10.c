// Write a program to print a table of N.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("\n Enter the table which you want to print");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("\n %d",i*n);
        i++;
    }
    return 0;
}