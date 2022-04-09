#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n,k,first;
int cnt;
int d[100010],nextn[100010],res[100010];
int main()
{
    cin >> first >> n >> k;
    for(int i=0;i<n;i++)
    {
        int p;
        cin >> p;
        cin >> d[p] >> nextn[p];
    }
    int i=first;
    while(i!=-1)
    {
        res[cnt++]=i;
        i=nextn[i];
    }
    for(int j=0;j<(cnt-cnt%k);j+=k)
        reverse(begin(res)+j,begin(res)+j+k);
    for(int j=0;j<cnt;j++)
    {
        if(j!=cnt-1)
            printf("%05d %d %05d\n",res[j],d[res[j]],res[j+1]);
        else
            printf("%05d %d -1",res[cnt-1],d[res[cnt-1]]);
    }
    return 0;
}
