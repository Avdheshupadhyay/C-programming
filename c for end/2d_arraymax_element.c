#include <stdio.h>
void main()
{
    int n, m, max = 0;
    printf("enter the rows and columb=");
    scanf("%d", &n);
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the element =");
            scanf("%d", &arr[n][m]);
        }
    }
    max = arr[0][0];
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < m; l++)
        {
            if (max < arr[k][l])
            {
                max = arr[k][l];
            }
        }
    }
    printf("maximum=%d\n", max);
}