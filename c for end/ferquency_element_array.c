#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n],f[n];
    int count;
    for(int i=0;i<n;i++)
    {
        printf("enter the element in array:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=count;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(f[i]!=0)
        {
            printf("the ferquency of element:%d = %d\n",arr[i],f[i]);
        }
    }
}