#include<stdio.h>

    int factorial(int x)
    {
        
        if(x>0)
        {
        return x*factorial(x-1);
        
        }
        else
        {
            return 1;
        }
    }
    int main()
    {
        int num;
        printf("enter the number=");
        scanf("%d",&num);
        printf("%d",factorial(num));
    }
