#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        int numbers[x];
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &numbers[i]);
        }

        int a;
        scanf("%d", &a);

        int position = -1;
        for (int j = 0; j < x; j++)
        {
            if (numbers[j] == a)
            {
                position = j + 1;
                break;
            }
        }

        printf("Case %d: ", i);
        if (position == -1)
        {
            printf("Not Found\n");
        }
        else
        {
            printf("%d\n", position);
        }
    }

    return 0;
}
