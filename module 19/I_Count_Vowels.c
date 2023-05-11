#include <stdio.h>
#include <string.h>
// int vowel(char str[], int i)
// {
int count(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 + count(n / 10);
    }
}
// if (str[i] == '\0')
// {
//     return 0;
// }
// int ans = vowel(str, i + 1);
// if (str[i] == 'A' && str[i] == 'Z')
// {
//     str[i] = str[i] + 32;
// }
// if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
// {
//     return ans + 1;
// }

// else
// {
//     return ans;
// }
// }
int main()
{
    // char str[201];
    // fgets(str, 201, stdin);
    // int ans = vowel(str, 0);
    // printf("%d", ans);
    int n;
    scanf("%d", &n);
    int result = count(n);
    printf("%d", result);
    return 0;
}