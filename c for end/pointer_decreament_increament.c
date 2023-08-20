#include<stdio.h>
int main()
{
    int x;
    printf("enter the number=");
    scanf("%d",&x);
    int *j;
    j=&x;
    printf("the address of %d=%d\n",x,j);
    x++;
    printf("the address of increament %d=%d\n",x,j);
    return 0;
}