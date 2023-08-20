#include<stdio.h>
int power(int n,int p)
{
    
    int ans=1,i;
    for( i=1;i<=p;i++)
    {
        
        ans=ans*n;
    }
    return ans;
}
int main()
{
    int num,p;
    printf("enter the number=");
    scanf("%d",&num);
    printf("enter the power=");
    scanf("%d",&p);
    printf("%d",power(num,p));
    return 0;
}