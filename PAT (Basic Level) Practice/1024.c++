#include <bits/stdc++.h>	// 万能头文件
using namespace std;

string str, s_numi, s_numf; // 分别存储 原字符串、E之前数字、E之后数字 
int signf, i_numf, posE, posDot;	//分别指数符号、指数的整数形式、'E' 的位置、小数点的位置 

int main()
{
	getline(cin, str);	// 读入字符串
	posE = str.find("E");	// 找到字符 'E' 的味道
	posDot = 2;	// 初始时小数点在整个字符串下标为2的地方 
	if(str[0] == '-') printf("-");	//当str第一个字符为负号时直接输出负号 
	for(int i=1; i<posE; i++)
	{
		if(str[i]!='.') s_numi.insert(s_numi.end(), str[i]);
		else continue;
	}	// 将 'E' 之前的数字存在 s_numi 中 
	if(str[posE+1] == '+') signf = 1;
	else signf = -1;	// 将指数符号以 1与 -1 的形式存在 signf 中 
	for(int i=posE+2; i<str.length(); i++)	// 将指数存在字符串 s_numf 中 
	{
		s_numf.insert(s_numf.end(), str[i]);
	}
	sscanf(s_numf.c_str(), "%d", &i_numf); // 将 s_numf 转为整型变量 i_numf 
	i_numf *= signf;	// 将指数带上符号 
	posDot += i_numf;	// 改变小数点位置 
	if(posDot <= 1) 	// 第一种情况 
	{
		printf("0.");
		for(int i=posDot; i<=0; i++) printf("0");	// 在数前补零
		for(int i=0; i<s_numi.length(); i++) printf("%c", s_numi[i]);
		return 0;
	}
	if(posDot>1 && posDot<=s_numi.length())	// 第二种情况 
	{
		for(int i=1; i<posDot; i++) printf("%c", s_numi[i-1]);
		printf(".");
		for(int i=posDot-1; i<s_numi.length(); i++) printf("%c", s_numi[i]);
		return 0;
	}
	if(posDot > s_numi.length())	// 第三种情况 
	{
		for(int i=0; i<s_numi.length(); i++) printf("%c", s_numi[i]);
		for(int i=s_numi.length()+1; i<posDot; i++) printf("0");	// 在数后补零
		return 0;
	}
	return 0;	// 完结撒花 
}
