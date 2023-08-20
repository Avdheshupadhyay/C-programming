#include<stdio.h>
#include<string.h>
void main()
{
    char a[22]="jai shri";
    char b[55];
    strncpy(b,a,1);
    printf("%s",b);
}