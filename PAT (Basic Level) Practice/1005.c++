#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
using namespace std;

typedef struct
{
    int data;
    bool covered;
} strnum;

int Find(strnum *arr, int val, int K)
{
    int i;
    for (i = 0; i < K; i++)
    {
        if (arr[i].data == val && arr[i].covered == false)
            return i;
    }
    return K;
}

int Callatz(strnum *arr, int data, int n)
{
    int tmp;
    while (data != 1)
    {
        if (data % 2 == 0)
        {
            data /= 2;
        }
        else
        {
            data = (3 * data + 1) / 2;
        }
        tmp = Find(arr, data, n);
        if (tmp < n)
            arr[tmp].covered = true;
    }
}

bool cmp(strnum a, strnum b)
{
    return a.data > b.data;
}

int main()
{
    int n;
    cin >> n;
    strnum *arr = (strnum *)malloc(sizeof(strnum) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].data);
        arr[i].covered = false;
    }

    for (int i = 0; i < n; i++)
    {
        Callatz(arr, arr[i].data, n);
    }

    sort(arr, arr + n, cmp);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!arr[i].covered)
        {
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!arr[i].covered)
        {
            printf("%d", arr[i].data);
            count--;
            if (count > 0)
            {
                printf("%s", " ");
            }
        }
    }
}