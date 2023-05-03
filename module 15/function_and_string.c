#include <stdio.h>
#include <string.h>
void fun(char str[])
{
    printf("%d", strlen(str));
}
int main()
{
    char str[6] = "hello";
    fun(str);
    return 0;
}