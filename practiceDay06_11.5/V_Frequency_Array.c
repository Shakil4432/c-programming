#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int array[a];
    int count[b+1];
    // input array numbers
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }
    // make couting array 0
    for (int i = 0; i < b+1; i++)
    {
        count[i]=0;
    }
    // count duplicate numbers
    for (int i = 0; i < a; i++)
    {
        count[array[i]]++;
    }
    // count 1 to n numbers how much
    for (int i = 1; i <= b; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}