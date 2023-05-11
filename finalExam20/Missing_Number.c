#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int result;
    long long int a, b, c, d;
    while (scanf("%lld %lld %lld %lld", &a, &b, &c, &d) != EOF)
    {

        result = a - (b + c + d);
        printf("%lld\n", result);
    }

    return 0;
}