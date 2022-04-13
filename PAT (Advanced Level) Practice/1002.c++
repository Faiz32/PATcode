#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a[1005] = {0}, b[1005] = {0}, sum[1005] = {0};

    int n, x;
    double y;
    // 读入第一行数据
    //	cin>>n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        //		cin >> x >> y;
        scanf("%d %lf", &x, &y);
        a[x] = y;
    }
    // 读入第二行数据
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        //		cin >> x >> y;
        scanf("%d %lf", &x, &y);
        b[x] = y;
    }
    // 系数相加, 求cnt
    int cnt = 0;
    for (int i = 0; i <= 1000; i++)
    {
        sum[i] = a[i] + b[i];
        if (sum[i] != 0)
        {
            cnt++;
        }
    }
    cout << cnt;
    // 注意从大的项开始输出
    for (int i = 1000; i >= 0; i--)
    {
        if (sum[i] != 0)
        {
            //			cout << " " << i << " " << sum[i];
            printf(" %d %.1lf", i, sum[i]); // 输出注意只保留一位小数
        }
    }

    return 0;
}
