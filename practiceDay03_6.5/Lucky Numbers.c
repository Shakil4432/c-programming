#include<stdio.h>
int main()
{
    int a,n,m;
    scanf("%d",&a);
    n=a%10;
    m=a/10;
    if (n%m==0 || m%n==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
return 0;
}