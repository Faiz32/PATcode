#include <iostream>
#include <math.h>
using namespace std;

int reput(int L[], int low, int high)
{
    while (low < high)
    {
        int temp = L[low];
        L[low] = L[high];
        L[high] = temp;
        low++;
        high--;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    int *arr = (int *)malloc(sizeof(int) * n);
    k %= n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reput(arr, 0, n - 1);
    reput(arr, 0, k - 1);
    reput(arr, k, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
        {
            cout << " ";
        }
    }
}