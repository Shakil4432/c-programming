#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int tiger, pathan;
    int tiger_cnt = 0, pathan_cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &tiger, &pathan);
        if (tiger > pathan)
        {
            tiger_cnt++;
        }
        if (pathan > tiger)
        {
            pathan_cnt++;
        }
    }
    if (pathan_cnt > tiger_cnt)
    {
        printf("Pathan");
    }
    else if (tiger_cnt > pathan_cnt)
    {
        printf("Tiger");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}