#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void my_abs()
{
    int n;
    scanf("%d", &n);
    int ABS = abs(n);
    printf("%d", ABS);
}

int main()
{
    my_abs();
    return 0;
}