#include<stdio.h>
void main()
{
    int x;
    printf("enter the number for find his address=");
    scanf("%d",&x);
    int *j;
    j=&x;
    printf("%d=%d\n",x,j);
    int **k;
    k=&j;
    printf("the address of address of x %d=%d",j,k);
}