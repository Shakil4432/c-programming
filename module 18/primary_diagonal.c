#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (n != m)
    {
        flag = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Primary Diagonal");
    }
    else
    {
        printf("Not Primary Diagonal");
    }
    return 0;
}