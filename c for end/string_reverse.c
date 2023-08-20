#include<stdio.h>
#include<string.h>
void main()
{
    char a[25]="hello";
    char b[25]="world";
    strrev(a);
    printf("string reverse=%s\n",a);
    printf("string2 with out reverse=%s\n",b);
    strrev(b);
    printf("string2 with reverse=%s",b);

}


