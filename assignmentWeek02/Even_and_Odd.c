#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int even_sum=0;
    int odd_sum=0;
    int sum=0;
   for (int i = 0; i < n; i++)
   {
    sum=sum+array[i];
    if (array[i]%2==0)
    {
        even_sum=even_sum+array[i];
        odd_sum=sum-even_sum;
    }
    else
    {
        odd_sum=odd_sum+array[i];
    }
   }
   printf("%d %d",even_sum,odd_sum);
  
   
    
return 0;
}