// n个联通分量需要n-1条边，算有多少个联通分量就知道差几条边。
#include <bits/stdc++.h>
using namespace std;
#define max 1000

int edge[max][max];
bool visited[max];
int cities;
void dfs(int x)
{
    visited[x] = 1;
    for (int i = 1; i <= cities; i++)
        if (visited[i] == 0 && edge[x][i] == 1)
            dfs(i);
}
int main()
{
    int highways, concerns, node1, node2, nocity, part = 0;
    scanf("%d%d%d", &cities, &highways, &concerns);
    for (int i = 0; i < highways; i++)
    {
        scanf("%d%d", &node1, &node2);
        getchar();
        edge[node1][node2] = edge[node2][node1] = 1;
    }
    for (int i = 0; i < concerns; i++)
    {
        part = 0;
        scanf("%d", &nocity);
        fill(visited + 1, visited + cities + 1, 0);
        visited[nocity] = 1;
        for (int j = 1; j <= cities; j++)
        {
            if (visited[j] == 0)
            {
                dfs(j);
                part++;
            }
        }
        if (part == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", part - 1);
        }
    }
    return 0;
}