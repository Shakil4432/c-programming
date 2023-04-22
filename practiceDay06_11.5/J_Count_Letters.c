#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000001];
    scanf("%s",ch);
    int var[26]={0};
    int len=strlen(ch);
    printf("%d",len);
    for (int i = 0; i < len; i++)
    {
        var[ch[i]]++;
    }
    
    
return 0;
}