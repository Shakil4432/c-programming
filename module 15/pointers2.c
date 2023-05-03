#include <stdio.h>
int main()
{
    double x = 5.26;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr2 = 100.25;
    // *ptr = 10.25;
    printf("value of x:%0.2lf\n", x);
    printf("value of ptr:%0.2lf\n", *ptr);
    printf("value of ptr:%0.2lf\n", *ptr2);
    printf("size of ptr:%d\n", sizeof(ptr));
    // printf("address of x:%p\n", &x);
    // printf("address of ptr:%p\n", ptr);

    return 0;
}