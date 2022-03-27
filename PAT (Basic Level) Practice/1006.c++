#include <iostream>
using namespace std;

int main()
{
    int num, hundred, ten, unit;
    cin>>num;
    unit = num % 10;
    hundred = num / 100;
    ten = (num % 100) / 10;

    for (int i = 0; i < hundred; i++)
    {
        cout<<"B";
    }
    for (int i = 0; i < ten; i++)
    {
        cout<<"S";
    }
    for (int i = 1; i <= unit; i++)
    {
        cout<<i;
    }
}