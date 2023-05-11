#include <stdio.h>
void recursion(int i)
{
    if (i == 0)
        return;
    printf("I love Recursion\n");
    recursion(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    recursion(n);
    return 0;
}