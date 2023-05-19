#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int res = 0;
    int count = 0;
    int tmp;
    int tmp2;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp2 = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp2;
            }
        }

        if (i == 0)
        {
            tmp = arr[i];
            res = 1;
        }
        else
        {
            if (tmp == arr[i])
            {
                res++;
            }
            else if (tmp + 1 == arr[i])
            {
                count = count + res;
                tmp = arr[i];
                res = 1;
            }
            else
            {
                tmp = arr[i];
                res = 1;
            }
        }
    }
    printf("%d", count);

    return 0;
}