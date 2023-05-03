#include <stdio.h>
void char_to_ascii(char n)
{
    printf("%d", n);
}
int main()
{
    char x;
    scanf("%c", &x);
    char_to_ascii(x);
    return 0;
}