#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the rows and columb=");
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    int key;
    printf("enter the key =");
    scanf("%d",&key);
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<m;l++)
        {
            printf("enter the element =");
            scanf("%d",&arr[k][l]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)
            {
                printf("%d\n,%d",i,j);
            }
        }
    }
}