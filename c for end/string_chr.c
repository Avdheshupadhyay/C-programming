#include<stdio.h>
void main()
{
    char a[22]="jai shree ram";
    char b[22]="j";
     if(strchr(a,b)==0)
     {
        printf("the first character of string are same");
     }
     else
     {
        printf("the first character of string are not same");
     }
}