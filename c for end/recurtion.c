#include <stdio.h>
int fact(int n)
{
   int ans;
   if(n>0) {
     ans = n * fact(n - 1);
    return ans;
   }
   else
   {
    return 1;
   }
}
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d", &n);
    printf(" the fctorial is =%d", fact(n));
}