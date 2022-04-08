#include <iostream>
#include <string.h>  //string
#include <algorithm> //sort
#include <math.h>    //pow
using namespace std;

typedef struct cookie
{
    int num;
    float money;
};

bool cmp(cookie A, cookie B)
{
    return A.money > B.money;
}

int main()
{
    int N, D;
    cin >> N >> D;
    cookie *arr = (cookie *)malloc(sizeof(cookie) * N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].num;
    }
    for (int i = 0; i < N; i++)
    {
        float summoney;
        cin >> summoney;
        arr[i].money = summoney / arr[i].num;
    }
    sort(arr, arr + N, cmp);
}