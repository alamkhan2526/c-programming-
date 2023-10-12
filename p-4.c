/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,max;
    printf("\n Enter 10 numbers");
    for(i=0; i<=9; i++)
    scanf("%d",&arr[i]);
    max=arr[0];
    for(i=0; i<=9; i++)
    if(max<arr[i])
    max=arr[i];
    printf("\n Greatest number in array is %d",max);
    return 0;
}