#include <stdio.h>
#include <string.h>
int main()
{
    char str[1002];
    fgets(str, 1002, stdin);
    int len = strlen(str);
    int capital = 0, small = 0, spaces = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
        if (str[i] == ' ')
        {
            spaces++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d", capital, small, spaces);
    return 0;
}