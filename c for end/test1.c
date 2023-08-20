#include <stdio.h>
void main()
{
    int n, c = 0;
    int array1[n][n];
    int array[n][n];
    printf("enter the size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] = array1[i][j])
                c++;
        }
    }
    if (c == 20)
    {
        printf("you win");
    }
    else
    {
        printf("you lose");
    }
}