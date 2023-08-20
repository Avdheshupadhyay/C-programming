#include<stdio.h>
void main()
{
    int arr[5],f[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the elment=");
        scanf("%d",&arr[i]);
    }
    
    int count;
    for(int i=0;i<5;i++)
    {
        count =1;
        for(int j=i+1;j<5;j++)
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
    for(int j=0;j<5;j++)
    {
        if(f[j]!=0)
        {
            printf("%d=%d\n",arr[j],f[j]);
        }
    }
}