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
        if (arr[i] == 0)
        {
            int j = i - 1;
            int k = 0;
            while (k < j)
            {
                tmp = arr[k];
                arr[k] = arr[j];
                arr[j] = tmp;
                k++;
                j--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}