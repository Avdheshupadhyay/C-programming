#include<stdio.h>
void main()
{
    int n,m,temp;
    printf("enter the rows and colomb=");
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter the element array=");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<m;l++)
        {
            for(int a=l+1;a<m;a++)
            {
                if(arr[k][l]>arr[k][a])
                {
                    temp=arr[k][l];
                    arr[k][l]=arr[k][a];
                    arr[k][a]=temp;
                }
            }
        }
    }
    for(int t=0;t<n;t++)
    {
        for(int u=0;u<m;u++)
        {
            printf("%d ",arr[t][u]);
        }
        printf("\n");

    }
}