#include <stdio.h>
void one_to_n(int i)
{
    if (i == 0)
        return;
    one_to_n(i - 1);
    printf("%d\n", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    one_to_n(n);
    return 0;
}