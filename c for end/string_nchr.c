#include<stdio.h>
#include<string.h>
void main()
{
    char a[22]="shivay";
    char b[3]="y";
    if(strnchr(a,b)==0)
    {
        printf("the last chararcter of string are same :");
    }
    else
    {
        printf("the last character of string are not same :");
    }
}