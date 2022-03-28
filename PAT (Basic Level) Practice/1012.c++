#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // A1
    int sumA1 = 0,countA1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 10 == 0)
        {
            sumA1 += arr[i];
            countA1++;
        }
    }
    if (countA1!=0)
    {
        cout << sumA1 << " ";
    }
    else
    {
        cout << 'N' << " ";
    }

    // A2
    int interlaceA2 = 0, flag = 1,countA2=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 1)
        {
            countA2++;
            if (flag == 1)
            {
                interlaceA2 += arr[i];
            }
            else
            {
                interlaceA2 -= arr[i];
            }
            flag = 1 - flag;
        }
    }
    if (countA2!=0)
    {
        cout << interlaceA2 << " ";
    }
    else
    {
        cout << 'N' << " ";
    }

    // A3
    int countA3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 2)
        {
            countA3++;
        }
    }
    if (countA3!=0)
    {
        cout << countA3 << " ";
    }
    else
    {
        cout << 'N' << " ";
    }
    
    // A4
    int countA4 = 0;
    double sumA4 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 3)
        {
            countA4++;
            sumA4 += arr[i];
        }
    }
    if (countA4!=0)
    {
        float advanceA4 = sumA4 / countA4;
        cout <<fixed << setprecision(1) << advanceA4 << " ";
    }
    else
    {
        cout << 'N' << " ";
    }


    // A5
    int maxA5= 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 4 && arr[i] >= maxA5)
        {
            maxA5 = arr[i];
        }
    }
    cout << maxA5;
}