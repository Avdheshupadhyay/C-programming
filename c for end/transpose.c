#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the rows of an array:");
    scanf("%d",&n);
    printf("enter the columb");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter the elemnt:");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}