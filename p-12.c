//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("\n Ener an alphabet");
    scanf("%c",&a);

    if(a>='A' && a<='Z')
    printf("\n %c alphabet is uppercase",a);

    if(a>='a' && a<='z')
    printf("\n %c alphabet is lowercase",a);
    return 0;
}
