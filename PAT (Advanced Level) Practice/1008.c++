#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, past = 0, time = 0, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int now;
        scanf("%d", &now);
        if (past < now)
        {
            time = (now - past) * 6 + 5;
        }
        else
        {
            time = (past - now) * 4 + 5;
        }
        ans += time;
        past = now;
    }
    printf("%d", ans);
    return 0;
}