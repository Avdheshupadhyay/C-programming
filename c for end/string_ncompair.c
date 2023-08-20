#include<stdio.h>
#include<string.h>
void main()
{
    char a[14]="shivay";
    char b[15]="shivshambhu";
    if(strncmp(a,b,2)==0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are not same");
    }
}