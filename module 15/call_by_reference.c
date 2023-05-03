#include <stdio.h>
void fun(int *p)
{
    // printf("value of p: %p\n", p);
    // printf("p address a x ar value : %d\n", *p);
    *p = 500;
}
int main()
{
    int x = 10;
    // printf("address of x: %p\n", &x);
    fun(&x);
    printf("x ar value - %d", x);
    return 0;
}