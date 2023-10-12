/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,sum=0;
    float avg;
    printf("\n Enter 10 numbers");
    for(i=0; i<=9; i++)
    scanf("%d",&arr[i]);
    for(i=0; i<=9; i++)
    sum=sum+arr[i];
    avg=sum/10.0;
    printf("\n Average os 10 numbers is %f",avg);
    return 0;

}