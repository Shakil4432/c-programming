#include <stdio.h>
void small_to_capital()
{
    char n;
    scanf("%c", &n);
    int x = n - 32;
    printf("%c", x);
}
int main()
{
    small_to_capital();
    return 0;
}