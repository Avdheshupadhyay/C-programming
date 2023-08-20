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
            printf("enter the element =");
            scanf("%d",&arr[i][j]);
        }
    }
   for(int k=0;k<n;k++)
   {
    for(int l=k;l<m;l++)
    {
        if(k==l)
        {
        printf("%d ",arr[k][l]);
        printf("\n");
       sum=sum+arr[k][l];
        }
    }
   }
   printf(" the sum of the diagonal = %d",sum);
}