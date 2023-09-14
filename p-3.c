// Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    int k=n*2-1,sum=0;

    while(i<=k)
    {
        sum=sum+i;
        i+=2;
    }
    printf("\n sum of %d odd natural numbers is %d",n,sum);
    
    return 0;
}