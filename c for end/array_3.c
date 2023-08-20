#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array=");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("enter the number=");
        scanf("%d",&arr[i]);
    }
    int mid=0+(n-1);
    for(int i=mid;i>=0;i--)
    {
        for(int j=0;j<=mid;j++)
        {
            sum=sum+arr[i]+arr[j];
        }
    }
    printf("the sum is = %d",sum);
}