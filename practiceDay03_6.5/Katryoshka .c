#include<stdio.h>
int main()
{
    int eye,mouth,body,count=0;
    scanf("%d %d %d",&eye,&mouth,&body);
    while (eye!=0 && body!=0)
    {
        if(eye>=1 && mouth>=1 && body>=1)
        { 
            count++;
            eye--;
            mouth--;
            body--;
        }
        else if (eye>=2 && body>=1)
        {
            count++;
            eye=eye-2;
            mouth--;
        }
        else if (eye>=2 && mouth>=1 && body>=1)
        {
            count++;
            eye=eye-2;
            mouth--;
            body--;
        }
        else if (body==eye/2)
        {
            count++;
            eye=eye-1;
            mouth--;
        }
        
    }
    printf("%d",count);
return 0;
}