#include <bits/stdc++.h> // 万能头文件
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    int buttom = (int)sqrt(2.0 * (1 + n)) - 1;  //三角形底边字符数
    if (buttom % 2 == 0) buttom -= 1;  //若为偶数要减一变为奇数（题目要求）
    int used = (1 + buttom) * (1 + buttom) / 2 - 1;  //总字符数

    //上三角形
    for (int i = buttom; i >= 1; i-=2) {  //i为当前行字符数
        //空格
        for (int j = 0; j < (buttom - i) / 2; j++) {  //(buttom - i) / 2为当前行字符前的空格数
            cout << " ";
        }
        //字符
        for (int j = 0; j < i; j++) {
            cout << c;
        }
        cout << endl;
    }

    //下三角形
    for (int i = 3; i <= buttom; i += 2) {  //i为当前行字符数
       //空格
        for (int j = 0; j < (buttom - i) / 2; j++) {  //(buttom - i) / 2为当前行字符前的空格数
            cout << " ";
        }
        //字符
        for (int j = 0; j < i; j++) {
            cout << c;
        }
        cout << endl;
    }
    cout << n - used;
    //system("pause");
    return 0;
}
