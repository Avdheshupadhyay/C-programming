#include<stdio.h>
void main()
{
    int n,count=0;
    printf("enter the size");
    scanf("%d",&n);
    int f[n];
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
        f[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
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
        printf("%d=%d\n",arr[i],count);
    }
}