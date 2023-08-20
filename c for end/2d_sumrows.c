#include<stdio.h>
void main()
{
    int n,m,sum=0;
    printf("enter the rows=");
    scanf("%d",&n);
    printf("enter the columb=");
    scanf("%d",&m);
    int arr[n][m];
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
            sum=sum+arr[k][l];
        }
       printf("%d\n",sum);
       
    }
    
    
}