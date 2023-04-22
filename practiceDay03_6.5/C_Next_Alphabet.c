#include<stdio.h>
int main()
{
    char ch;
    int after_ch;
    scanf("%c",&ch);
    if (ch>='a' && ch<='y')
    {
        after_ch=ch+1;
        printf("%c",after_ch);
    }
    if (ch=='z')
    {
        ch='a';
        printf("%c",ch);
    }
return 0;
}