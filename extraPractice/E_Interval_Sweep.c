#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ab = abs(a - b);
    if (a == 0 && b == 0)
    {
        printf("NO");
    }
    else if (ab == 1 || ab == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}