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
    for (int i = 1; i <= m; i++)
    {
        int index, value;
        scanf("%d %d", &index, &value);
        arr[index] = arr[index] + value;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}