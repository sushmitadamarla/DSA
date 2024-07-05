#include <iostream>
#include <climits> // For INT_MAX

using namespace std;

int main()
{
    int I = INT_MAX;
    int cost[8][8] =
    {{I, I, I, I, I, I, I, I},
     {I, I, 25, I, I, I, 15, I},
     {I, 25, I, 12, I, I, I, 10},
     {I, I, 12, I, 8, I, I, I},
     {I, I, I, 8, I, 16, I, 14},
     {I, I, I, I, 16, I, 20, 18},
     {I, 5, I, I, I, 20, I, I},
     {I, I, 10, I, 14, 18, I, I}};

    int near[8] = {I, I, I, I, I, I, I, I};
    int t[2][7]; // Changed size to [2][7] for n-1 edges

    int i, j, k, u, v, n = 7, min = I;

    // Step 1: Find the minimum cost edge
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            if (cost[i][j] < min)
            {
                min = cost[i][j];
                u = i;
                v = j;
            }
        }
    }

    t[0][0] = u;
    t[1][0] = v;
    near[u] = near[v] = 0;

    // Step 2: Initialize the near array
    for (i = 1; i <= n; i++)
    {
        if (near[i] != 0)
        {
            if (cost[i][u] < cost[i][v])
                near[i] = u;
            else
                near[i] = v;
        }
    }

    // Step 3: Repeat the process for n-2 edges
    for (i = 1; i < n - 1; i++)
    {
        min = I;
        for (j = 1; j <= n; j++)
        {
            if (near[j] != 0 && cost[j][near[j]] < min)
            {
                k = j;
                min = cost[j][near[j]];
            }
        }

        t[0][i] = k;
        t[1][i] = near[k];
        near[k] = 0;

        for (j = 1; j <= n; j++)
        {
            if (near[j] != 0 && cost[j][k] < cost[j][near[j]])
                near[j] = k;
        }
    }

    // Print the MST edges
    for (i = 0; i < n - 1; i++)
    {
        cout << "(" << t[0][i] << ", " << t[1][i] << ")" << endl;
    }

    return 0;
}
