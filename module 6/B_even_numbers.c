#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    if (i==1)
    {
        printf("-1\n");
    }
    else
    {
        for(i=1; i<=n; i=i+1)
        {
            if(i%2==0)
            {
                printf("%d\n",i);
            }
        }
    }
    
return 0;
}