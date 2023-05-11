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
    int tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {
            printf("%d %d", arr[(n / 2) - 1], arr[n / 2]);
            break;
        }
        if (n % 2 != 0)
        {
            printf("%d", arr[n / 2]);
            break;
        }
    }
    return 0;
}