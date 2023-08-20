#include<stdio.h>
int array(int n)
{
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element=");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        sum=sum+arr[j];

    }
    printf("%d\n",sum);
    return 0;
}
void main()
{
    int n;
    printf("enter the size of array=");
    scanf("%d",&n);
    array(n);
}