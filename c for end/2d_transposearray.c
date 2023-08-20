#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the rows and columb=");
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter the element=");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<n;l++)
        {
            printf("%d ",arr[l][k]);
        }
        printf("\n");
    }
}