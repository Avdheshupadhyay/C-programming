#include<stdio.h>
void main()
{
    int arr[3][3]={1,2,5,4,3,2,5,3,5};
    int n=3,count=0,sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[j][i];
        }
        printf("\n");
        printf("%d",sum);
    }
}