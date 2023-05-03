// #include <stdio.h>
// void fun(int *arr, int x)
// {
//     arr[0] = 500;
// }
// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     fun(arr, 5);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
#include <stdio.h>
void fun(char *str)
{
    str[0] = 'G';
}
int main()
{
    char str[6] = "hello";
    fun(str);
    printf("%s", str);
    return 0;
}