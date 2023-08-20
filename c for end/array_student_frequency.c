#include<stdio.h>
void main()
{
    int n,flag=0,count=0;
    printf("enter the number of student=");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the marks of students %d = ",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]>=12)
        {
            count++;
        }
        else if(arr[j]<12)
        {
            flag++;
        }

    }
    printf("the freqency of pass students is =%d\n",count);
    printf("the frequency of fail strudents is = %d",flag);
    }