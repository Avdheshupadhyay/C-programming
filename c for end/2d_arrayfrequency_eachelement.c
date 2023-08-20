#include <stdio.h>
void main()
{
    int n, count = 0;
    printf("enter the rows=");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the elements =");
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        count++;
        printf("%d=%d\n",arr[j],count);
    }
}
