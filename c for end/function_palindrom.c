#include<stdio.h>
int palindrom(int n)
{
    int r,temp,sum=0;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("this is palindrom number");
    }
}
void main()
{
    int a;
    printf("enter the any number =");
    scanf("%d",&a);
    palindrom (a);

}