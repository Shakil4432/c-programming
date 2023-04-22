#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    int pos1=0,pos2=0;
    int temp;
    int min=INT_MAX,max=INT_MIN;   
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
            pos1=i;
        }
        if (array[i]<min)
        {
            min=array[i];
            pos2=i;
        }
    }
        temp=array[pos1];
        array[pos1]=array[pos2];
        array[pos2]=temp;
        for (int i = 0; i < n; i++)
        {
            printf("%d ",array[i]);
        }
return 0;
}