#include<stdio.h>
int palindrom(int n)
{
    int temp,sum=0,palindrom=0;
    temp=n;
    while(n>0)
    {
        int r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==temp)
    {
        palindrom=temp;
    }
    return palindrom;
    }
    int prime(int n)
    {
        int count=0,prime=0;

    for(int i=2;i<10;i++)
    {
        if(n%i==0)
        {
            count=1;
        }
    }
    if(count==0)
    {
        prime=n;
    }
    return prime;
   }
   int main()
   {
      int n;
      printf("enter the number = ");
      scanf("%d",&n);
      if(prime(n)==palindrom(n))
      {
        printf("this number is prime and palindrom=%d",prime(n));
      }
    return 0;
   }