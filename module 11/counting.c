#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int s[12]={0};
    for (int  i = 0; i < n; i++)
    {
       s[ar[i]]++;
    }
return 0;
}