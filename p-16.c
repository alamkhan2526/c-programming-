/*16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("\n Enter a character");
    scanf("%c",&c);
    if(c>='a' && c<='z')
    printf("\n %c character is an lowercase ",c);
    else if(c>='A' && c<='Z')
    printf("\n %c character is an uperrcase",c);
    else if(c>=0 &&  c<=0)
    printf("\n %c character is a digit",c);
    else
    printf("\n %c character is a special character",c);
    return 0;
}