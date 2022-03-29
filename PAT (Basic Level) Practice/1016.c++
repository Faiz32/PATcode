#include <stdio.h>
#include <algorithm>
#include <string.h>
#include "iostream"
using namespace std;

int main()
{
    char A[10],B[10],DA,DB;
    cin>>A>>DA>>B>>DB;
    int countA=0,countB = 0;
    for (int i = 0; i < 10; i++)
    {
        if (A[i]==DA)
        {
            countA++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (B[i]==DB)
        {
            countB++;
        }
    }
    int PA=0,PB=0;
    int DAnum = DA-'0',DBnum =DB-'0';
    for (int i = 0; i < countA; i++)
    {
        PA = PA*10+DAnum;
    }
    for (int i = 0; i < countB; i++)
    {
        PB = PB*10+DBnum;
    }
    int sum = PA+PB;
    cout<<sum<<endl;
}