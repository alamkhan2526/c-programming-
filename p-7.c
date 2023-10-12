/*-Write a program to find second largest in an array.Take array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,sl,count=0;
    printf("\n Enter 10 numbers");
    for(i=0; i<=9; i++)
    scanf("%d",&arr[i]);
    sl=arr[0];
    for(i=1; i<=9; i++)
    {
    if(sl<arr[i])
    {
        sl=arr[i];
        count++;
    }
    if(count==2)
    {
    printf("second largest numbers is %d",sl);
    break;
    }
    }
    return 0;
}