#include<stdio.h>
void  main()
{
    int n;
    int sum=0,r,temp;
    printf("enter the any number to check palndrom:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("this number is palindrom:");
    }
    else
    {
        printf("this number is not palindrom:");
    }
}