#include <stdio.h>
void main()
{
    int n, m;
    printf("enter the rows of array=");
    scanf("%d", &n);
    printf("enter the column of array=");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter the element in first array =");
            scanf("%d", &arr[i][j]);
        }
    }
int brr[n][m];
for (int k = 0; k < n; k++)
{
    for (int l = 0; l < m; l++)
    {
        printf("enter the element in second array=");
        scanf("%d", &brr[k][l]);
    }
}

int crr[n][m];
for (int i = 0; i < n; i++)
{

    for (int j = 0; j < m; j++)
    {
        crr[i][j] = arr[i][j] + brr[i][j];
        printf("%d ", crr[i][j]);
    }
    printf("\n");
}
}
