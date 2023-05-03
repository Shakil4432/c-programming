#include <stdio.h>
void capital_to_small()
{
    char n;
    scanf("%c", &n);
    int x = n + 32;
    printf("%c", x);
}
int main()
{
    capital_to_small();
    return 0;
}