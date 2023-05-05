#include <stdio.h>
int count_before_zero(int *arr, int x)
{
    int count = 0;
    for (int i = 0; arr[i] != 0; i++)
    {
        count++;
        if (i == x - 1)
        {
            break;
        }
    }
    printf("%d", count);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    count_before_zero(arr, n);

    return 0;
}