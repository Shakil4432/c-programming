#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int min;
    int flag = 1;
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d ", &a);
        if (flag)
        {
            min = a;
            flag = 0;
        }
        else
        {
            if (a < min)
            {
                min = a;
            }
        }

        counter++;
        if (counter == m || i == n)
        {
            printf("%d ", min);
            counter = 0;
            flag = 1;
        }
    }
    return 0;
}