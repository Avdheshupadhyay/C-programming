#include<stdio.h>
void main()
{
    int a=5;
    int *p=&a;
    int *q=&p;
    printf("the only pointer is=%d\n",p);
    printf(" the double pointer =%d",q);
}