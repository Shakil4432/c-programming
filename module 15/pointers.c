#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    *ptr = 200;
    // x = 200;
    // printf("address of x:%p\n", &x);
    // printf("value of ptr:%p\n", ptr);
    // printf("address of ptr:%p\n", &ptr);
    // printf("memory size of :%d\n", sizeof(ptr));
    printf("value of x - %d\n", x);
    printf("value of ptr - %d\n", *ptr);

    return 0;
}