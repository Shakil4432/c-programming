#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;
    if (n != m)
    {
        flag = 0;
    }
    int i = 0;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i + j == n - 1)
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
        printf("Secondary Diagonal");
    }
    else
    {
        printf("Not a Secondary Diagonal");
    }
    return 0;
}