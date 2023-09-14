/*Write a program which takes the month number as an input and display number of
days in that month*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int month;
    printf("\n Enter the month value");
    scanf("%d",&month);

    if(month==1)
    printf("\n %d is january and it has 31 days ",month);
    if(month==2)
    printf("\n %d is february and it has 28 days",month);
    if(month==3)
    printf("\n %d is march and it has 30 days ",month);
    if(month==4)
    printf("\n %d is april and it has 31 days",month);
    if(month==5)
    printf("\n %d is may and it has 31 days",month);
    if(month==6)
    printf("\n %d is june and it has 30 days",month);
    if(month==7)
    printf("\n %d is july and it has 30 days",month);
    if(month==8)
    printf("\n %d is august and it has 31 days",month);
    if(month==9)
    printf("\n %d is september and it has 31 days",month);
    if(month==10)
    printf("\n %d is october and it has 30 days",month);
    if(month==11)
    printf("\n %d is november and it has 31 days",month);
    if(month==12)
    printf("\n %d is december and it has 31 days",month);
    return 0;
}