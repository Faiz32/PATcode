#include <bits/stdc++.h>
using namespace std;

const int MAXV = 510;  // 最大顶点数 
const int INF = 1000000000; // 无穷大 

int n, m, st, ed, G[MAXV][MAXV], weight[MAXV]; // n为顶点数，m为边数，st为起点，ed为终点，G为图（邻接矩阵），weight 为点权 
int d[MAXV], w[MAXV], num[MAXV]; // d为最短路径距离，w为记录最大点权之和，num为记录最短路径条数 
bool vis[MAXV] = {false}; // 初始化未被访问的点，当==true时意味被访问过 

void Dijkstra(int s)
{
	fill(d, d + MAXV, INF); //初始化所有点的最短距离为最大值 
	memset(num, 0, sizeof(num)); // 初始化最短路径数为0 
	memset(w, 0, sizeof(w)); // 初始化点权之和为0 
	d[s] = 0; // 起点到起点的最短距离为0 
	w[s] = weight[s]; // 累计点权之和初始为起点的点权 
	num[s]= 1; // 初始默认最短路径为1，起点自己到自己 
	for(int i = 0; i < n; i++) // 对所有的点循环 
	{
		int u = -1, MIN = INF; // 初始值 u = -1， MIN为最大值（目的为找出最小值） 
		for(int j = 0; j < n; j++) // 对所有的点循环 
		{
			if(vis[j] == false && d[j] < MIN) // 如果符合未被访问过并且是所有未被访问过的点的路径距离最短 
			{
				u = j;
				MIN = d[j];
			}
		} // 循环出来后就找到上述满足要求的点 
		if(u == -1) return; // 如果找不到，有两种情况，1是所有点都被访问过了，可以结束算法，2是剩下与s起点不连通的点，也可以结束算法 
		vis[u] = true; // 标记已访问该点 
		for(int v = 0; v < n; v++) // 对所有的点循环 
		{
			if(vis[v] == false && G[u][v] != INF) // 如果该点经过边连接的点未被访问 
			{
				if(d[u] + G[u][v] < d[v]) // 如果经过访问点能缩短该未被访问点的距离 
				{
					d[v] = d[u] + G[u][v]; // 更新该点的最短距离为访问点的最短距离加边权 
					w[v] = w[u] + weight[v]; // 更新该点的点权为该点点权加记录累加点权 
					num[v] = num[u]; // 更新该点的最短路径条数 
				}
				else if(d[u] + G[u][v] == d[v]) // 如果有一条相同长度的路径 
				{
					if(w[u] + weight[v] > w[v]) // 该路径所带的累计点权更大 
					{
						w[v] = w[u] + weight[v]; // 更新累计点权为该更大的累计点权 
					}
					num[v] += num[u]; // 该相同路径上的点最短路径条数在原来基础上加上访问点的路径条数 
				}
			}	
		}
	}
	
}

int main()
{
	scanf("%d%d%d%d", &n, &m, &st, &ed);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &weight[i]);
	}
	int u, v;
	fill(G[0], G[0] + MAXV * MAXV, INF);
	for(int i = 0; i < m; i++)
	{
		scanf("%d%d", &u, &v);
		scanf("%d", &G[u][v]);
		G[v][u] = G[u][v];
	}
	Dijkstra(st);
	printf("%d %d\n", num[ed], w[ed]);
	return 0;
}
