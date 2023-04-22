#include<stdio.h>
int main()
{
    int a,ans;
    scanf("%d",&a);
    ans = a/1000;
    if (a>999 && a<=9999)
    {
        if (ans%2 == 0)
       {
        printf("EVEN");
       }
       else
       {
        printf("ODD");
       }
    }
return 0;
}