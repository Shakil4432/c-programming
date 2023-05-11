#include <stdio.h>
void n_to_one(int i)
{
    if (i == 1)
        return;
    printf("%d ", i);
    n_to_one(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    n_to_one(n);
    printf("1");
    return 0;
}