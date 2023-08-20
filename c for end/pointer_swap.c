#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("a=%d\nb=%d",*a,*b);
    return 0;
}
int main()
{
    int x,y;
    printf("enter the x=");
    scanf("%d",&x);
    printf("enter the y=");
    scanf("%d",&y);
    swap(&x,&y);
    return 0;
}