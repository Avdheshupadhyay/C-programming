#include<stdio.h>
void main()
{
   int a[2]={21,22};
   int *p;
   p=a;
   printf("%d%d",*p,*(p+1));
}