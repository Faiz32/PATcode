#include <iostream>
#include <string.h>  //string
#include <algorithm> //sort
#include <math.h>    //pow
using namespace std;

int main()
{
    string strnum;
    int arr[10] = {0};
    cin >> strnum;
    for (int i = 0; i < strnum.length(); i++)
    {
        arr[strnum[i] - '0']++;
    }
    bool flag = true;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            if (flag == false)
            {
                cout << endl;
                cout << i << ':' << arr[i];
            }
            else if (flag == true)
            {
                cout << i << ':' << arr[i];
                flag = false;
            }
        }
    }
}