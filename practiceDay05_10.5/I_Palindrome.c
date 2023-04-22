#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int is_palindrome=1;
    int len=strlen(a);
    for (int i = 0; i < len; i++)
    {
        a[i];
    }
    for (int j = len-1; j >= 0; j--)
    {
        a[j];
    }
    int i,j;
    if (a[i]==a[j])
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
return 0;
}