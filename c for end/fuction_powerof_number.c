#include<stdio.h>
int power(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=i*i;
    }
    return ans;
}
int main()
{
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    printf("%d\n",power(n));
    int m;
    printf("enter the second number=");
    scanf("%d",&m);
    printf("%d",power(m));
    return 0;
}