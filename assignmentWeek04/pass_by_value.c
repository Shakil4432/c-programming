#include <stdio.h>
void value(int x)
{
    x = 50;
    printf("value of function x- %d\n", x);
}
int main()
{
    int x = 20;
    value(x);
    printf("value of main function - %d\n", x);
    return 0;
}
// output
// value of function x- 50
// value of main function - 20
