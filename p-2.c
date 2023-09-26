// Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void natural(int n);
int main()
{
    int n;
    printf("\nEnter the value of n");
    scanf("%d",&n);
    natural(n);
    return;
}void natural(int n)
{
    if(n<1)
    return;
    else
    {
        printf("%d ",n);
        natural(n-1);
    }
}