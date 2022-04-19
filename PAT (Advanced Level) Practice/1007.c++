#include <bits/stdc++.h>
using namespace std;

int dp[10100];
int num[10100];
int pre[10100];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    dp[0] = num[0];
    pre[0] = 0;
    for (int i = 1; i < n; i++) {
        if (num[i] > dp[i - 1] + num[i]) {
            dp[i] = num[i];
            pre[i] = i;
        }
        else {
            dp[i] =dp[i-1]+num[i];
            pre[i] = pre[i - 1];
        }
    }
    int Maxindex, Maxvalue = -1;
    for (int i = 0; i < n; i++) {
        if (dp[i] > Maxvalue) {
            Maxvalue = dp[i];
            Maxindex = i;
        }
    }
    if (Maxvalue == -1) {
        cout << "0" << " " <<num[0]<< " "<<num[n-1];
    }
    else {
        cout << Maxvalue << " " << num[pre[Maxindex]] << " " << num[Maxindex];
    }
    return 0;
}