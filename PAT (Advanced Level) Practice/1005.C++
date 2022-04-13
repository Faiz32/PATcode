#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N.length(); i++)
    {
        sum += N[i] - '0';
    }
    if (sum == 0)
    {
        cout << arr[0];
    }
    else
    {
        int num[101], count = 0;
        while (sum > 0)
        {
            int a = sum % 10;
            num[count] = a;
            sum = sum / 10;
            count++;
            if (sum == 0)
            {
                break;
            }
        }
        bool flag = true;
        for (int i = count - 1; i >= 0; i--)
        {
            if (flag == false)
            {
                cout << ' ';
            }
            cout << arr[num[i]];
            flag = false;
        }
    }
    return 0;
}
