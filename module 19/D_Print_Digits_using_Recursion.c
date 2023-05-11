#include <stdio.h>
void print_digits(int n)
{
    if (n == 0)
        return;
    int x = n % 10;
    print_digits(n / 10);
    printf("%d ", x);
}
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        print_digits(x);
        if (x == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}