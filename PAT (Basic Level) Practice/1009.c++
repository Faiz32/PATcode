#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

int main()
{
    string word;
    stack<string> words;
    while (cin>>word)
    {
        words.push(word);
    }
    cout<<words.top();
    words.pop();
    while (!words.empty())
    {
        cout<<' '<<words.top();
        words.pop();
    }
}