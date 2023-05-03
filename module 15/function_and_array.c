#include <stdio.h>
// void fun(int arr[], int n)
void fun(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        printf("%d ", *(arr + i));
    }
}
int main()
{
    // int arr[5] = {10, 20, 30, 40, 50};
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    fun(arr, n);
    return 0;
}