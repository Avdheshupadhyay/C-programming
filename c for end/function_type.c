#include<stdio.h>
int sum()
{
    //call by refrence
    int x=5;
    int y=8;
    int ans;
    ans=x+y;
   return ans;
}
int multiply(int p,int q)
{
    //call by value
    int remedy;
    remedy=p*q;
    return remedy;
}
void main()
{
   int a,b;
   printf("enter the a=");
   scanf("%d",&a);
   printf("enter the b=");
   scanf("%d",&b);
   printf("the plus is =%d\n",sum());
   printf("the product=%d",multiply(a,b));
}