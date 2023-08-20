#include<stdio.h>
#include<string.h>
void main()
{
    char a[25]="har har mahadev";
    char b[27];
    strcpy(b,a);
    printf("string 1=%s\n",a);
    printf("string2=%s\n",b);
}