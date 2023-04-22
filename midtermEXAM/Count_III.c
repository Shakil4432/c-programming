#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int count[26]={0};
    int len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        count[str[i]-97]++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("%c - %d\n",i,count[i-97]);
    }
    
    
return 0;
}