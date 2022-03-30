#include <map>
#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d\n", &n);

    int js=0, ys=0;
    string bcj;
    map<char,int> jm, ym;

    for(int i=0; i<n; i++)
    {
        getline(cin, bcj);
        if(((bcj[0]=='C')&&(bcj[2]=='J'))||((bcj[0]=='J')&&(bcj[2]=='B'))||((bcj[0]=='B')&&(bcj[2]=='C')))
        {
            js++;
            jm[bcj[0]] += 1;
        }
        if(((bcj[0]=='J')&&(bcj[2]=='C'))||((bcj[0]=='B')&&(bcj[2]=='J'))||((bcj[0]=='C')&&(bcj[2]=='B')))
        {
            ys++;
            ym[bcj[2]] += 1;
        }
    }

//    printf("%d %d %d\n", jm['B'], jm['C'], jm['J']);
//    printf("%d %d %d\n", ym['B'], ym['C'], ym['J']);

    printf("%d %d %d\n", js, n-ys-js, ys);
    printf("%d %d %d\n", ys, n-ys-js, js);
    printf("%c %c", jm['B']>=jm['C'] ? (jm['B']>=jm['J'] ? 'B' : 'J') : (jm['C']>=jm['J'] ? 'C' : 'J'),ym['B']>=ym['C'] ? (ym['B']>=ym['J'] ? 'B' : 'J') : (ym['C']>=ym['J'] ? 'C' : 'J'));

    return 0;
}
