#include<stdio.h>
void main()
{
    char a[21]="har har mahadev";
    char b[43];
    strncpy(b,a,3);
    printf("%s",b);
}