#include<stdio.h>
int main()
{
    // char array[5]={'R','a','h','a','t'};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n",array[i]);
    // }
    char array[6]="Rahat\0";
    printf("%s",array);
    
return 0;
}




// #include<stdio.h>
// int main()
// {
//     int array[5]={10,20,30,40,50};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",array[i]);
//     }
    
// return 0;
// }