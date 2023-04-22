#include<stdio.h>
#include<string.h>
int main()
{
    char array[1000001];
    scanf("%s",&array);
    int sum=0;
    for (int i = 0; i < strlen(array); i++)
    {
        sum=sum+array[i]-'0';
    }
    printf("%d",sum);
    
return 0;
}