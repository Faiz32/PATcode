#include <bits/stdc++.h> // 万能头文件
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum[100001] = {0};
    int x, y;
    int max = -1, maxschool = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        sum[x] += y;
        if (sum[x] > max)
        {
            max = sum[x];
            maxschool = x;
        }
    }
    cout << maxschool << ' ' << max;
}