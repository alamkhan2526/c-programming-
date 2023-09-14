/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int p,c,m,b,h,marks=0;
    printf("\n please ensure the marks is to be given out of 100");
    printf("\n Enter the marks of p ");
    scanf("%d",&p);
    printf("\n Enter the marks ofc ");
    scanf("%d",&c);
    printf("\n Enter the marks of m");
    scanf("%d",&m);
    printf("\n Enter the marks of b");
    scanf("%d",&b);
    printf("\n Enter the marks of h");
    scanf("%d",&h);
    marks=p+c+m+b+h;
    
            
        if(marks>=165)
        printf("\n Congratulation you are pass with %d marks",marks);
        else
        printf("\n Sorry you are fail with %d marks",marks);
        return 0;
}