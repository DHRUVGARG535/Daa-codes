#include <stdio.h>

struct job
{
    int id;
    int deadline;
    int profit;
};

void jobSequence(struct job jobs[], int n)
{

    int result[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int start = jobs[i].deadline - 1;

        for (int j = start; j >= 0; j--)
        {
            if (result[j] == -1)
            {
                result[j] = i;
                break;
            }
        }
    }

    int totalProfit = 0;
    printf("Jobs scheduled : ");
    for (int i = 0; i < n; i++)
    {
        if (result[i] != -1)
        {
            printf("J%d ", jobs[result[i]].id);
            totalProfit += jobs[result[i]].profit;
        }
    }

    printf("\nTotal profit : %d\n", totalProfit);
}

void main()
{
    struct job jobs[] =
        {
            {1, 2, 10},
            {2, 1, 50},
            {3, 2, 10},
            {4, 1, 40},
            {5, 3, 30}};

    int n = sizeof(jobs) / sizeof(jobs[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (jobs[j].profit > jobs[i].profit)
            {
                struct job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    jobSequence(jobs, n);
}