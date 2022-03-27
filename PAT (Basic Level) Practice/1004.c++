#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;

typedef struct student
{
    string name;
    string code;
    int mark;
};

bool cmp(student A, student B)
{
    return A.mark > B.mark;
}

int main()
{
    int n;
    cin >> n;
    student stlist[n];
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> stlist[i].name >> stlist[i].code >> stlist[i].mark;
    }
    sort(stlist, stlist + n, cmp);
    cout << stlist[0].name << " " << stlist[0].code << endl;
    cout << stlist[n - 1].name << " " << stlist[n - 1].code << endl;
}