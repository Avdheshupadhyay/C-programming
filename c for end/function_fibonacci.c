#include<stdio.h>
int fibonacci(int term)
{
    int n1=0,n2=1,n3,i;
    printf("%d\n",n1);
    printf("%d\n",n2);
    for(i=2;i<term;++i)
    {
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
    return n3;
}
void main()
{
    int term;
    printf("enter the term=");
    scanf("%d",&term);
    fibonacci(term);
}