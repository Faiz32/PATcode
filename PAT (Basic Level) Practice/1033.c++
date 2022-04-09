#include <iostream>
#include <cctype>
using namespace std;
int main(){
    //输入
    string bad,s;
    getline(cin,bad);
    getline(cin,s);
    //对should的每个字符进行判断并输出
    for(int i = 0;i < s.length();i++){
    //我从输出需要的条件角度出发
  //---------------------------------------------
//         //大写字母,bad里边没有且 '+'键没坏才输出.Ps:bad里边只有大写
//         if(isupper(s[i]) && bad.find(s[i]) == string::npos && bad.find('+') == string::npos){
//             cout << s[i];
//             continue;     //输出了就直接下一个字符
//         }
//         //其他字符，bad里边没有它们的大写就输出
//         if(!isupper(s[i]) && bad.find(toupper(s[i])) == string::npos)
//             cout << s[i];
 //---------------------------------------------------------
 
   //别人从不输出需要的条件出发，更简单
            //如果该字符的大写在bad中找到，不输出
        if(bad.find(toupper(s[i])) != string::npos)continue;
            //如果该字符为大写，且bad中有'+'键，不输出
        if(isupper(s[i]) && bad.find('+') != string::npos)continue;
            //其余的都可以输出
        cout << s[i];
    }
    return 0;
}
