#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of an array=");
    scanf("%d",&n);
    int arr[n];
    int p,i;
    for(int k=0;k<n;k++)
    {
        printf("enter the element =");
        scanf("%d",&arr[k]);
    }
    printf("enter the position of element for delete in array =");
    scanf("%d",&p);
    for(int i=p;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int j=0;j<n-1;j++)
    {
        printf("%d\n",arr[j]);
    }
     printf("enter the element for insert=");
     scanf("%d",&i);
      arr[p]=i;
     for(int l=0;l<n;l++)
     {
        printf("%d\n",arr[l]);
     }
}