#include<stdio.h>
void main()
{
    int n;
    printf("enter the students of p1=");
    scanf("%d",&n);
    int arr[n];
    printf("p1 class have only 20 roll no.\n");
    for(int i=0;i<n;i++)
    {
       printf("enter the mid term marks of students roll number wise=");
       scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]>12)
        {
            printf("these student are passed in mid term=%d\n",j);
        }
        else if(arr[j]<12)
        {
            printf("these student are failed in mid term =%d\n ",j);
        }
    }

}