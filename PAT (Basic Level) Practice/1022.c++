#include <iostream>
#include <string.h>  //string
#include <algorithm> //sort
#include <math.h>    //pow
using namespace std;

int main()
{
    int A, B, D;
    cin >> A >> B >> D;
    int sum = A + B;
    int ans[31], num = 0;
    do
    {
        ans[num++] = sum % D;
        sum /= D;
    } while (sum != 0);
    for (int i = num - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
    return 0;
}