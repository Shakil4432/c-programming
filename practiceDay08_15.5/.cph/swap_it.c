#include <stdio.h>
void swap_it(int *ptr1, int *ptr2)
{
    int tmp;
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
    printf("%d %d", *ptr1, *ptr2);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(&a, &b);
    return 0;
}