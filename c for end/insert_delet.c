#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter te elment:");
        scanf("%d",&arr[i]);
    }
   for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    // delete at beggining
    for(int j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
    // insert at specific position
      int p;
      printf("enter the element:");
      scanf("%d",&p);
      arr[0]=p;
      for(int i=0;i<n;i++)
      {
        printf("%d\n",arr[i]);
      }

}