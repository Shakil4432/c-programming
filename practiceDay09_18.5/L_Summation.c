#include <stdio.h>
long long int summation(int arr[], int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return arr[0];
    return arr[n] + summation(arr, n - 1);
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
    long long int result = summation(arr, n - 1);
    printf("%lld", result);

    return 0;
}