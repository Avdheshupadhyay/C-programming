#include<stdio.h>
#include<string.h>
void main()
{
    char a[22]="shiv shambhu";
    char b[32]="shivay";
    if(strncasecmp(a,b,2)==0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are not same");
    }
}