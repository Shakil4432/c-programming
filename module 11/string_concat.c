#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int len=strlen(b);
    int k=strlen(a);
    for (int i = 0; i <= len; i++)
    {
        a[k]=b[i];
        k++;
    }
    printf("%s",a);
    
return 0;
}