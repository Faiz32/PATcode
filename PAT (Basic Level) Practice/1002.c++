#include "sstream"
#include "iostream"
using namespace std;

int main()
{
    string a;
    cin >> a;
    int sum = 0;
    for (int i = 0; i < (signed)a.length(); i++)
    {
        sum += a[i] - '0';
    }
    stringstream ss;
    string str;
    ss << sum;
    ss >> str;
    int i = 0;
    for (i = 0; i < (signed)str.length() - 1; i++)
    {
        switch (str[i])
        {
        case '1':
            cout << "yi" << ' ';
            break;
        case '2':
            cout << "er" << ' ';
            break;
        case '3':
            cout << "san" << ' ';
            break;
        case '4':
            cout << "si" << ' ';
            break;
        case '5':
            cout << "wu" << ' ';
            break;
        case '6':
            cout << "liu" << ' ';
            break;
        case '7':
            cout << "qi" << ' ';
            break;
        case '8':
            cout << "ba" << ' ';
            break;
        case '9':
            cout << "jiu" << ' ';
            break;
        case '0':
            cout << "ling" << ' ';
            break;
        default:
            break;
        }
    }
    switch (str[i])
    {
    case '1':
        cout << "yi";
        break;
    case '2':
        cout << "er";
        break;
    case '3':
        cout << "san";
        break;
    case '4':
        cout << "si";
        break;
    case '5':
        cout << "wu";
        break;
    case '6':
        cout << "liu";
        break;
    case '7':
        cout << "qi";
        break;
    case '8':
        cout << "ba";
        break;
    case '9':
        cout << "jiu";
        break;
    case '0':
        cout << "ling";
        break;
    default:
        break;
    }
}