#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int sum;
    for (int i = 1; i <= n; i++)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        if (b > a)
        {
            sum = ((b * (b + 1)) / 2) - (a * (a + 1)) / 2 + a;
            printf("%lld\n", sum);
        }

        if (a > b)
        {
            sum = ((a * (a + 1)) / 2) - (b * (b + 1)) / 2 + b;
            printf("%lld\n", sum);
        }
    }

    return 0;
}