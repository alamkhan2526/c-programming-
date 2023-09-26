// Write a recursive function to print octal of a given decimal number
#include<stdio.h>
#include<conio.h>
void binary(int n);
int main()
{
    int n;
    printf("\n Enter a decimal number ");
    scanf("%d",&n);
    binary(n);
    return 0;
}void binary(int n)
{
    if(n==0)
    return;
    else
    {
        binary(n/8);
        printf("%d",n%8);
    }
}