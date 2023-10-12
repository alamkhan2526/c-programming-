/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i=0,se=0,so=0;
    printf("\n Enter 10 numbers");
    for(i=0; i<=9; i++)
    scanf("%d",&arr[i]);
    for(i=0; i<=9; i++)
    {
    if(arr[i]%2==0)
    se=se+arr[i];
    else
    so=so+arr[i];
    }
    printf("\n Sum of even is %d \n Sum of odd is %d",se,so);
    return 0;
}