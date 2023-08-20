#include<stdio.h>
void main()
{
    int n,temp;
    printf("enter the size:");
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
        printf("enter the value=");
        scanf("%d",&arr[i]);
     }
     for(int j=0;j<n;j++)
     {
        for(int k=0;k<n;k++)
        {
            if(arr[j]>arr[k])
            {
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
     }
     for(int i=0;i<n;i++)
     {
        printf("the sorted array is =%d\n",arr[i]);
     }

}