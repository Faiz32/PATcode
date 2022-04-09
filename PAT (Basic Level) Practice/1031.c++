#include <bits/stdc++.h> // 万能头文件
using namespace std;

int main()
{
    int n, flag2 = 0, quan[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    cin >> n;
    char test[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int flag1 = 0, sum = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (!isdigit(s[i]) && flag1 == 0)
                flag1 = 1;
            sum = sum + (s[i] - '0') * quan[i];
        }
        if (s[s.length() - 1] != test[sum % 11] || flag1 == 1)
        {
            cout << s << endl;
            flag2 = 1;
        }
    }
    if (flag2 == 0)
        cout << "All passed";
    return 0;
}