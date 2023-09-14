/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include<Stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("\n Enter three numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1==num2 || num1||num3 || num2==num3)
    printf("\n %d is appears two times",num1,num2,num3);
     if (num1>num2 && num1>num3)
    
    printf("\n%d is greater than %d and %d",num1,num2,num3);
    else if(num2>num3)
    printf("\n %d is greater than %d and %d",num2,num1,num3);
    else
    printf("\n %d is greater than %d and %d",num3,num2,num1);
    
    return 0;
}