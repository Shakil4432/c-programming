#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        int even = 0, odd = 0;
        for (int j = 1; j <= x; j++)
        {
            int a;
            scanf("%d", &a);
            if (a % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even == odd)
        {
            printf("0\n");
        }
        else if (x % 2 != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", abs(even - odd) / 2);
        }
    }
    return 0;
}
