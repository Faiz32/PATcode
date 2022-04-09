#include <bits/stdc++.h> // 万能头文件
using namespace std;

int main()
{
    double myCLK_TCK = 100;
    double c1, c2;
    cin >> c1 >> c2;
    int timesum = (c2 - c1) / myCLK_TCK + 0.5;
    int hour = timesum / 3600;
    int minute = (timesum % 3600) / 60;
    int second = timesum % 60;
    printf("%02d:%02d:%02d", hour, minute, second);
}