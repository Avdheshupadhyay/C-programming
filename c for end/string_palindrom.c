#include<stdio.h>
#include<string.h>
void main()
{
    char x[34];
    printf("enter the string=");
    gets(x);
    char y[55];
    strcpy(y,x);
    if(strcmp(y,strrev(x))==0)
    {
       printf("this string is palindrom:");
    }
    else
    {
        printf("this string is not palindrom:");
    }
}