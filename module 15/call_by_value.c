#include <stdio.h>
void fun(int x)
{
    printf("address of fun x:%p\n", &x);
}
int main()
{
    int x = 10;
    // printf("address of main x:%p\n", &x);
    fun(x);
    printf("value of main x:%d\n", x);
    return 0;
}