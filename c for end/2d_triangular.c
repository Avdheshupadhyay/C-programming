#include<stdio.h>
void main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int n=3;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}