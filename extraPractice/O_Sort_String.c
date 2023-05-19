#include <stdio.h>
int main()
{
    char ch;
    int cnt[26] = {0};
    int n;
    while (scanf("%d", &n) != EOF)
    {
        scanf("%c", &ch);
        cnt[ch - 'a']++;
    }
    for (char i = 0; i < 26; i++)
    {
        while (cnt[i] != 0)
        {
            printf("%c", i + 'a');
            cnt[i]--;
        }
    }
    return 0;
}