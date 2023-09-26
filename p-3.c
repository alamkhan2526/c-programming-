// Write a recursive function to print first N odd natural numbers
#include<stdio.h>
#include<conio.h>
void odd(int n);
int main()
{
    int n;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    odd(n*2-1);
    return 0;
}void odd(int n)
{
    if(n<1)
    return;
    else{
        odd(n-2);
        printf("%d ",n);
    }
}