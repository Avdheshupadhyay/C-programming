#include<stdio.h>
void main()
{
    int arr[3][3]={3,7,4,1,7,5,8,9,6};
    int mini=0,n=3;
    mini=arr[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mini>arr[i][j])
            {
                mini=arr[i][j];
            }
        }
    }
    printf("%d",mini);
}