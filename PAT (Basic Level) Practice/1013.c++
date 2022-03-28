#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i = 2, j, cnt = 0;
    bool isnum;
    int m, n;
    cin >> m >> n;

    while (cnt != n)
    {
        isnum = true;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isnum = false;
                break;
            }
        }
        if (isnum)
        {
            cnt++;

            //第一种输出方式
            if (cnt >= m && cnt < n && ((cnt - m + 1) % 10 != 0))
                cout << i << " ";
            if (cnt >= m && cnt < n && ((cnt - m + 1) % 10 == 0))
                cout << i << endl;
            if (cnt == n)
                cout << i;
        }
        i++;
    }

    return 0;
}