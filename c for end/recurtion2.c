#include <stdio.h>
int factorial(int num)
{
    int ans;
    if (num > 0)
    {
        ans = num * factorial(num - 1);
        return ans;
    }
    else
    {
        return 1;
    }
}
void main()
{
    int x;
    printf("enter the number to find factorial=");
    scanf("%d", &x);
    printf("the factorial is =%d", factorial(x));
}