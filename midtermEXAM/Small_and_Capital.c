#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int len=strlen(str);
    int small_count=0;
    int capital_count=0;
    for (int i = 0; i < len; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            small_count++;
        }
        if (str[i]>='A' && str[i]<='Z')
        {
            capital_count++;
        }
    }
    printf("%d %d",capital_count,small_count);
return 0;
}