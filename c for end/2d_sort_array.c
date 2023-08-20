#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the rows=");
    scanf("%d",&n);
    printf("enter the columb=");
    scanf("%d",&m);
    int arr[n][m];
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter the element=");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<m;l++)
        {
            for(int p=l+1;p<m;p++)
            {
                if(arr[k][l]>arr[k][p])
                {
                    temp=arr[k][l];
                    arr[k][l]=arr[k][p];
                    arr[k][p]=temp;
                }
            }
        }
    }
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<m;b++)
        {
            printf("%d ",arr[a][b]);
        }
        printf("\n");
    }
}