#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        long long int a;
        scanf("%lld", &a);
        if (a % 2 != 0)
        {
            count = 0;
        }
        while (a > 0)
        {
            if (a % 2 != 0)
            {
                break;
            }
            else
            {
                a = a / 2;
                count++;
            }
        }
        if (count > result)
        {
            result = count;
        }
    }
    printf("%d", result);

    return 0;
}