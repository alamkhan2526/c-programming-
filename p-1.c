// Write a recursive function to print first N natural numbers
#include<stdio.h>
#include<conio.h>
void natural(int n);
int main()
{
    int n;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    natural(n);
    return 0;
}void natural(int n)
{
    if(n<=0)
    return;
    {
    natural(n-1);
    printf("%d ",n);
    }
}