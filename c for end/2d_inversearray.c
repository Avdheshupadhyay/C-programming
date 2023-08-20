#include<stdio.h>
void main()
{
    int n,m;
    int arr[n][m];
    printf("enter the rows and columb=");
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter the element =");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}