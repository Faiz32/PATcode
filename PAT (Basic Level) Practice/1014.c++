#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
    string a, b, c, f;
    string d[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    string e = "ABCDEFGHIJKLMN";
    cin >> a >> b >> c >> f;
    int min1 = (a.length() > b.length() ? b.length() : a.length());
    int min2 = (c.length() > f.length() ? f.length() : c.length());
    /*星期*/
    for (int i = 0; i < min1; i++)
    {
        if ('A' <= a[i] && a[i] <= 'G' && a[i] == b[i])
        {
            for (int j = 0; j < 7; j++)
            {
                if (a[i] == e[j])
                {
                    cout << d[j] << ' ';
                    break;
                }
            }
            break;
        }
    }
    /*小时*/
    bool z = false;
    for (int i = 0; i < min1; i++)
    {
        if (a[i] == b[i] && (('A' <= a[i] && a[i] <= 'N') || (a[i] >= '0' && a[i] <= '9')) && z)
        {
            if (isupper(a[i]))
            {
                for (int j = 0; j < 14; j++)
                {
                    if (a[i] == e[j])
                    {
                        cout << j + 10 << ':';
                        break;
                    }
                }
                break;
            }
            else
            {
                cout << '0' << a[i] << ':';
                break;
            }
        }
        if (a[i] == b[i] && (('A' <= a[i] && a[i] <= 'N')))
            z = true;
    }
    /*分钟*/
    for (int i = 0; i < min2; i++)
    {
        if (c[i] == f[i] && isalpha(c[i]))
        {
            if (i < 10)
                cout << '0' << i;
            else
                cout << i;
        }
    }

    return 0;
}
