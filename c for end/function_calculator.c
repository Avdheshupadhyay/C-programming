#include <stdio.h>
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
int substract(int c, int d)
{
    int ans = c - d;
    return ans;
}
int multiply(int e, int f)
{
    int product = e * f;
    return product;
}
int divide(int g, int h)
{
    int division = g / h;
    return division;
}

int main()
{
    int num1, num2;
    printf("enter the first number =");
    scanf("%d", &num1);
    printf("enter the second number =");
    scanf("%d", &num2);
    printf("the sum is =%d\n", add(num1, num2));
    printf("the minus is =%d\n", substract(num1, num2));
    printf("the product is =%d\n", multiply(num1, num2));
    printf(" the division is =%d\n", divide(num1, num2));
}