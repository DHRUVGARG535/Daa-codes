#include <stdio.h>
#define max 100

int parent[max];

void find(int x)
{
    if (parent[x] == x)
        return x;

    return find(parent[x]);
}

void unionSet(int a, int b)
{
    parent[a] = b;
}

void sortEdges(int src[], int dest[], int weight[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (weight[j] > weight[i])
            {
                    
            }
        }
    }
}