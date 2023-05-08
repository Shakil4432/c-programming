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
    // exact row
    // int a;
    // scanf("%d", &a);
    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d ", arr[a][i]);
    // }

    int a;
    scanf("%d", &a);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i][a]);
    }

    return 0;
}