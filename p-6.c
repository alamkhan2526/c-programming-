// Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void reverseeven(int n);
int main()
{
    int n;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    reverseeven(n*2);
    return 0;
}void reverseeven(int n)
{
    if(n<2)
    return;
    else
    {
        printf("%d ",n);
        reverseeven(n-2);
    }
}