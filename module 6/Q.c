#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    int n;
    for (int t = 1; t <= test; t++)
    {
        scanf("%d",&n);
        do
        {
          printf("%d ",n%10);
          n = n/10;
        } while (n!=0);
        printf("\n"); 
    }
    
    
return 0;
}