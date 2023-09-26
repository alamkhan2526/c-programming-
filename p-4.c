// Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void oddreverse(int n);
int main()
{
    int n;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    oddreverse(n*2-1);
    return 0;
}void oddreverse(int n)
{
    if(n<1)
    return;
    else{
        printf("%d ",n);
        oddreverse(n-2);
    }
}