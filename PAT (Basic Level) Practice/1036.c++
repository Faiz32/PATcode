#include <bits/stdc++.h> // 万能头文件
using namespace std;

int round(int n)
{
}

int main()
{
    double n;
    char a;
    cin >> n >> a;
    int m = n / 2 + 0.5;
    for (int i = 0; i < n; i++)
    {
        cout << a;
    }
    cout << endl;
    for (int i = 0; i < m - 2; i++)
    {
        cout << a;
        for (int j = 0; j < n - 2; j++)
        {
            cout << " ";
        }
        cout << a << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a;
    }
}