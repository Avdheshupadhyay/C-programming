#include<stdio.h>
#include<string.h>
void main()
{
    char a[23]="SHIVAY";
    char b[22]="shivay";
    if(strcasecmp(a,b)==0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are not same");
    }
}