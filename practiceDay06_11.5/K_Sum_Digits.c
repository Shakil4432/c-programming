#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char m[n+1];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s",m);
    }
    for (int i = 0; i < strlen(m); i++)
    {
        sum=sum+m[i]-'0';
    }
    printf("%d",sum);
return 0;
}