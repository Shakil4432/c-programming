#include<stdio.h>
int main()
{
    int n;
    scanf("%d enter the value of n :", &n);
     if (n > 0)
     {
        printf("positive");
     }
     else if (n < 0)
     {
        printf("nagative");
     }
     else
     {
        printf("ZERO");
     }

    return 0;
    
}