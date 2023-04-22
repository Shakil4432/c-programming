#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100];
    scanf("%s",ar);
    int count[26]={0};
    for (int i = 0; i < strlen(ar); i++)
    {
       count[ar[i]-97]++;
    }
    printf("%d ",count[0]);
    

return 0;
}