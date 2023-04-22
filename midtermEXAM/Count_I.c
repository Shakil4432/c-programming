#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    int pos_count=0;
    int neg_count=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2==0)
        {
            pos_count++;
        }
        else
        {
            neg_count++;
        }
    }
    printf("%d %d",pos_count,neg_count);
    
return 0;
}