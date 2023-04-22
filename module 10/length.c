#include<stdio.h>
#include<string.h>
int main()
{
    char array[100];
    scanf("%s",&array);
    int len=strlen(array);
    printf("%d",len);

return 0;
}


// #include<stdio.h>
// int main()
// {
//     char array[100];
//     scanf("%s",array);
//     int count=0;
//     int i=0;
//     while (array[i]!='\0')
//     {
//         count++;
//         i++;
//     }
//     for ( i = 0; array[i]!='\0'; i++)
//     {
//         count++;
//     }
    
//     printf("%d",count);
// return 0;
// }