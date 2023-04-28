#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);
    int tmp;
    for (int i = 0; i <= m; i++)
    {
        int index1, index2;
        scanf("%d %d", &index1, &index2);
        tmp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}