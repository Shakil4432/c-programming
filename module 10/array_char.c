#include<stdio.h>
int main()
{
    // int array[5];
    // int sz=sizeof(array)/sizeof(int);
    // printf("%d\n",sz);
    char array[5];
    int sz = sizeof(array)/sizeof(char);
    printf("%d\n",sz);
    printf("%d",sizeof(char));
    // printf("%d\n",sizeof(array));
    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(float));
    // printf("%d\n",sizeof(long long int));
    // printf("%d\n",sizeof(double));
return 0;
}


// #include<stdio.h>
// int main()
// {
//     char array[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%c",&array[i]);
//     }
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c\n",array[i]);
//     }
    
// return 0;
// }