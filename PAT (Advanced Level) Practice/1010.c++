#include <bits/stdc++.h>
using namespace std;
 
long long out(string stra,long long  radix) {
    long  long outNum=0;
    long  long wei=1;
    for(int i=stra.size()-1; i>=0; i--) {
        int num=stra[i]-'0';
        if(isalpha(stra[i]))
            num=stra[i]-'a'+10;
        outNum+=num*wei;
        wei*=radix;
    }
    return outNum;
}
 
int main() {
 
    string stra,strb;
    cin>>stra>>strb;
    int sign;
    cin>>sign;
    int radix;
    cin>>radix;
    if(sign==2) {
        string str=strb;
        strb=stra;
        stra=str;
    }
    long long outNum=out(stra,radix);
//outNum是已知进制数字转换为10进制对应的数值
    int strbMax=-1;//标记数字 所有位数上最大的那个数字，比如123 就是3
    for(int i=0; i<strb.size(); i++) {
        int num=strb[i]-'0';
        if(isalpha(strb[i]))
            num=strb[i]-'a'+10;
        strbMax=max(strbMax,num);
    }
 
    long long a=strbMax+1;//下限肯定需要加1否则就该进位了
    long long b=max(a,outNum);//注意的第一个点，防止就一位数字 一位数字outnum 比a还小可能
    //比如 8 8 1 10   ,我们下限是9 但是outnum是8，这个时候我们上界应该是9的
    //对于两位以上数字，找到一样的数值缩对应进制就是最小的进制了，因为就一种情况才满足
    while(a<=b) {
        long long i=(a+b)/2;
        long long get=out(strb,i);
        if(get==outNum) {
            cout<<i;
            return 0;
        } else if(get>outNum||get<0) {//这里也要注意，get可能超过Long long范围
            b=i-1;
        } else if(get<outNum) {
            a=i+1;
        }
 
    }
 
    cout<<"Impossible";
 
    return 0;
}
 