#include <stdio.h>
#include <stdlib.h>
void sequence(int x)
{
    int ABS = abs(x);
    if (x >= 0)
    {
        for (int i = x; i >= -x; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = -ABS; i <= ABS; i++)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    sequence(n);
    return 0;
}