// Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,n,sum=0;
    printf("\n enter the value of n");
    scanf("%d",&n);
    int k=n*2;
    while(i<=k)
    {   
        sum=sum+i;
        i+=2;
    }
        printf("\n sum of %d even natural number is%d",n,sum);
    return 0;
}