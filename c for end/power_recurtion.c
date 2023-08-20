#include<stdio.h>
int power(int p,int n)
{
    if(p>=0)
    {
        return n*power(p-1,n);
    }
}
void main()
{
   int p=2;
   int n=4;
   printf("%d",power(p,n));
}