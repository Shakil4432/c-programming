#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d ", &n, &m);
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
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != arr[0][0])
                {
                    flag = 0;
                }
            }
            else if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("Scalar Matrix");
    }
    else
    {
        printf("Not a Scalar Matrix");
    }
    return 0;
}