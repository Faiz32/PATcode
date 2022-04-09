#include <bits/stdc++.h> // 万能头文件
using namespace std;

int main(){
	string s1,s2,ans;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		if(s2.find(s1[i])==-1&&ans.find(toupper(s1[i]))==-1)
			ans+=toupper(s1[i]);
	}
	cout<<ans;
	return 0;
} 
