#include <stdio.h>
#include <string.h>
void my_len(char *str)
{
    int len;
    len = strlen(str);
    printf("%d", len);
}

int main()
{
    char str[100];
    scanf("%s", str);
    my_len(str);

    return 0;
}