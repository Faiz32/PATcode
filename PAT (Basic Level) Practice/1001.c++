#include "iostream"
using namespace std;

int main()
{
    int a, count = 0;
    cin >> a;
    while (a != 1)
    {
        if (a % 2 == 0)
            a = a / 2;
        else if (a % 2 == 1)
            a = (3 * a + 1) / 2;
        count++;
    }
    cout << count << endl;
}
