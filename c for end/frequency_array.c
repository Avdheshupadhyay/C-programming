#include<stdio.h>
void main()
{
    int n,key=76,count=1;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
       for(int j=i;j<n;j++)
       {
        if(arr[i]==arr[j])
        {
            count++;
        }
       }
       printf(" the element is :%d=%d\n",arr[i],count);
    }
}