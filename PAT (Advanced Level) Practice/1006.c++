#include <bits/stdc++.h>
using namespace std;

int main()
{
    char in[17], out[17];
    int records, timein = 24 * 60 * 60, timeout = 0; //最早，最晚初始化
    // freopen("test.txt","r",stdin);
    scanf("%d", &records);
    while (records)
    {
        char ID[17];
        int H1, H2, M1, M2, S1, S2;
        scanf("%s %d:%d:%d %d:%d:%d", ID, &H1, &M1, &S1, &H2, &M2, &S2);
        int i = H1 * 60 * 60 + M1 * 60 + S1;
        if (timein > i)
        { //比最早还早
            timein = i;
            strcpy(in, "");
            strcpy(in, ID);
        }
        i = H2 * 60 * 60 + M2 * 60 + S2; //离开
        if (timeout < i)
        { //比最晚还晚
            timeout = i;
            strcpy(out, "");
            strcpy(out, ID);
        }
        --records;
    }
    printf("%s %s", in, out);
    return 0;
}