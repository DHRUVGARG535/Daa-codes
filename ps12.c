#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int n = 4;
    int m = 8;

    int p[5] = {0, 1, 2, 5, 6};
    int wt[5] = {0, 2, 4, 3, 4};

    int k[5][9];

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= m; w++)
        {
            if (i == 0 || w == 0)
            {
                k[i][w] = 0;
            }
            else if (wt[i] <= w)
            {
                k[i][w] = max(p[i] + k[i - 1][w - wt[i]], k[i - 1][w]);
            }
            else
            {
                k[i][w] = k[i - 1][w];
            }
        }
    }

    printf("max profit is %d", k[n][m]);
}
