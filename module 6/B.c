#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i = 2; i<=n; i=i+2)
    {
        printf("%d\n",i); 
    }
    if (n<2)
    {
        n = -1;
        printf("%d",n);
    }
    
    
 return 0;
}