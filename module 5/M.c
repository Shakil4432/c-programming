// #include<stdio.h>
// int main()
// {
//     char letter;
//     scanf("%c",&letter);
//     if(letter>=97 && letter<=122)
//     {
//         printf("ALPHA\nIS SMALL");
//     }
//     else if (letter>=65 && letter<=90)
//     {
//         printf("ALPHA\nIS CAPITAL");
//     }
//     else 
//     {
//         printf("IS DIGIT");
//     }
    
//     return 0;

// }

// nested way
#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if (x>='0' && x<='9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (x>='a' && x<='z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }  
    }   
return 0;
}