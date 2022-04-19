#include <bits/stdc++.h>
using namespace std;

int main(){
	int k,n,T=2,M=0,M2=0;
	double a,p1[2010]={0},p2[2010]={0};//1000+1000=2000  别忘记初始化 
	
	cin>>k;
	while(k--){
		cin>>n>>a;
		p1[n]=a;
		if(M<n) M=n;
	}
	
	cin>>k;
	while(k--){
		cin>>n>>a;
		for(int i=0;i<=M;i++){
			if(p1[i]!=0){
				p2[i+n]+=a*p1[i];
				if(M2<i+n) M2=i+n; 
			} 
		}
	}
	
	int count=0;
	for(int i=0;i<=M2;i++){
		if(p2[i]!=0) count++;
	}
	cout<<count;
	
	for(int i=M2;i>=0;i--){
		if(p2[i]!=0) printf(" %d %.1f",i,p2[i]);
	}
	return 0;
}