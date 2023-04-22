#include<stdio.h>
int main()
{
    char x[21],y[21];
    scanf("%s %s",x,y);
    int i=0;
    while (1)
    {
        if(x[i]==y[i])
        {
            i++;
        }
        else if (x[i]>y[i])
        {
            printf("%s",y);
            break;
        }
        else
        {
            printf("%s",x);
            break;
        }
    }
    
return 0;
}