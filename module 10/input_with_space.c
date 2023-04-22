#include<stdio.h>
#include<string.h>
int main()
{
    char array[20];
    fgets(array,19,stdin);
    array[17]='\0';
    printf("%s",array);   
return 0;
}
// int main()
// {
//     char array[18];
//     gets(array);
//     printf("%s",array);
// return 0;
// }