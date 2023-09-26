// Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
void squares(int n);
int main()
{
    int n;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    squares(n);
    return 0;
}void squares(int n)
{
    if(n<1)
    return;
    else
    {
        squares(n-1);
        printf("%d ",n*n);
    }
}