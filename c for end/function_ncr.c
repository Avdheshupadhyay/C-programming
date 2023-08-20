#include <stdio.h>
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int require(int r)
{
    int ans = 1;
    for (int j = 1; j <= r; j++)
    {
        ans = ans * j;
    }
    return ans;
}
void main()
{
    int n, r;
    printf("enter the number =");
    scanf("%d", &n);
    printf("enter the r=");
    scanf("%d", &r);
    printf("the ncr is = %d\n", factorial(n) / require(r));
}