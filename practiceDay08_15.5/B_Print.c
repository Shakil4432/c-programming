#include <stdio.h>
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int x;
    scanf("%d", &x);
    print(x);
    return 0;
}