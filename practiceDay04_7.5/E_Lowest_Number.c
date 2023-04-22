#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    int min=INT_MAX,pos=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
            pos=i+1;
        }
    }
    printf("%d %d",min,pos);
return 0;
}