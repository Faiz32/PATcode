#include <bits/stdc++.h>
using namespace std;

int main()
{
	double w,t,l,p=1;
	char a[3];
	for(int i=0;i<3;i++)
    {
		scanf("%lf %lf %lf",&w,&t,&l);
        double m = max(max(w,t),l);
		p=p*m;
		if(m==w)    a[i]='W';
		if(m==t)    a[i]='T';
		if(m==l)    a[i]='L';
	}
	printf("%c %c %c %.2lf",a[0],a[1],a[2],(p*0.65-1)*2);
	return 0;
}
