#include <stdio.h>
#include <string.h>
void is_palindrome(char *str)
{
    int len = strlen(str);
    int flag = 1, tmp;
    int i = 0, j = len - 1;
    while (i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        if (str[i] != str[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }
    if (flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
int main()
{
    char str[11];
    scanf("%s", str);
    is_palindrome(str);
    return 0;
}