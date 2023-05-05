#include <stdio.h>
// has return + parameter;
// int sub(int x, int y)
// {
//     int result = x - y;
//     return result;
// }
// int main()
// {
//     int rst = sub(50, 10);
//     printf("%d", rst);
//     return 0;
// }

// has return + no parameter
// int sub()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int result = a - b;
//     return result;
// }
// int main()
// {
//     int rst = sub();
//     printf("%d", rst);
//     return 0;
// }

// no return + parameter;
// void sub(int x, int y)
// {
//     int result = x - y;
//     printf("%d", result);
// }
// int main()
// {
//     sub(40, 30);
//     return 0;
// }

// no return + no parameter;
void sub()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = a - b;
    printf("%d", result);
}
int main()
{
    sub();
    return 0;
}
