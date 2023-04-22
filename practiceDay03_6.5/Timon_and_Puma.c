#include<stdio.h>
int main()
{
    int a,b,divisors;
    scanf("%d %d",&a,&b);
     divisors = a-b;
    if (divisors>=0)
    {
        printf("%d",divisors);
    }
    else
    {
        divisors=0;
        printf("%d",divisors);
    }
return 0;
}