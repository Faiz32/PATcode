#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b, i = 0, z[1000100];
    if (ans < 0)
    {
        printf("-");
        ans = abs(ans);
    }
    do
    {
        z[i++] = ans % 10; // i就是位数
        ans = ans / 10;
    } while (ans != 0);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", z[j]);
        if (j > 0 && j % 3 == 0)
            printf(",");
    }
    return 0;
}
