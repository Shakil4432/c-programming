#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int x;
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    { 
        if (array[i]==x)
        {
            count++; 
        }
    }
   printf("%d",count);
return 0;
}