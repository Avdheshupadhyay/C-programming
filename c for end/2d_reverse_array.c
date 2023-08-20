#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the rows and columb=");
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    for(int h=0;h<n;h++)
    {
        for(int v=0;v<m;v++)
        {
            printf("enter the element =");
            scanf("%d",&arr[h][v]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}