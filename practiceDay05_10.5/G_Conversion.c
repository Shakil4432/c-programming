#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100001];
    scanf("%s",ar);
    for (int i = 0; i < strlen(ar); i++)
    {
        if (ar[i]==',')
        {
            ar[i]='\0';
        }
        if (ar[i]>='a' && ar[i]<='z')
        {
            ar[i]=ar[i]-32;
        }
        else
        {
            ar[i]=ar[i]+32;
        }
        printf("%c",ar[i]);
    }
    
return 0;
}