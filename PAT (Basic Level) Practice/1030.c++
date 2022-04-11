#include <bits/stdc++.h> // 万能头文件
using namespace std;

int main()
{
    long int N, p;
    cin >> N >> p;
    long int *arr = (long int *)malloc(sizeof(long int) * N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        long int mp = arr[i] * p;
        for (int j = i + count; j < N; j++)
        {
            if (mp < arr[j])
            {
                break;
            }
            if (j - i + 1 > count)
                count = j - i + 1;
        }
    }
    cout << count;
}