#include <stdio.h>
void change_it(int *arr, int x)
{
    for (int i = 0; i < x; i++)
    {
        int value = 100;
        if (i == x - 1)
        {
            arr[i] = value;
        }
        printf("%d ", arr[i]);
    }
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
    change_it(arr, n);

    return 0;
}