#include<stdio.h>
void main()
{
    int c;
    int arr[5]={8,9,1,3,6};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf(" the sorted =%d\n",arr[i]);
    }
}