#include <stdio.h>
void sort_num()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp;
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
        printf("%d\n", arr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
}
int main()
{
    sort_num();
    return 0;
}