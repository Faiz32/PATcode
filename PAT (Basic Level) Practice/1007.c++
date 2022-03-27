#include <iostream>
#include <math.h>
using namespace std;

bool issushu(int n)	//素数判断
{
    int i;
    int k = (int)sqrt(n);
    for(i = 2 ; i <= k ; i++)
    {
        if(n%i == 0)
            break;
    }
    return i>k;
}

int main()
{
    int n;
    cin >> n;
    bool *arr = (bool *)malloc(sizeof(bool) * (n+1));
    for(int i = 0;i<=n;i++)
    {
        arr[i]=true;
        if(issushu(i))
        {
            arr[i]=false;
        }
    }
    arr[0]=true;//true为合数
    arr[1]=true;
    int count=0;
    for (int i = 2; i < n-1; i++)
    {
        if (!arr[i]&&!arr[i+2])
        {
            count++;
        }
    }
    cout<<count;
}