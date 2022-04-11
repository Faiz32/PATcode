#include <bits/stdc++.h> // 万能头文件
using namespace std;

typedef long long LL;
 
const int maxn = 100010;
const int MOD = 1000000007;
const int INF = 1000000000;//INF:下确界  
const LL SUP = (1LL<<63)-1;//SUP:上确界 
const double eps = 1e-5;
 
struct fraction{
	LL son;
	LL mom;
};
 
LL gcd(LL a,LL b){
	return !b?a:gcd(b,a%b);
}
 
fraction reduction(fraction r){
	if(r.mom<0){//分母为负数，让其成为规定的分数的模样 
		r.son = -r.son;
		r.mom = -r.mom;
	}
	
	if(r.son == 0){
		r.mom = 1;
	}else{
		LL m = gcd(abs(r.son),r.mom);//最大公因子:取绝对值很容易丢 
		//约分
		r.son /= m;
		r.mom /= m; 
	}
	
	return r;
}
 
void print(fraction r){//输出化简后的分数
	r = reduction(r);
 
	if(r.mom == 1){//整数(当然包括0)
		if(r.son<0)printf("(%lld)",r.son);//如果是负数 
		else printf("%lld",r.son);
	}else if(abs(r.son)>r.mom){//假分数 
		if(r.son<0)printf("(%lld %lld/%lld)",r.son/r.mom,abs(r.son)%r.mom,r.mom);
		else printf("%lld %lld/%lld",r.son/r.mom,abs(r.son)%r.mom,r.mom); 
	}else{//真分数 
		if(r.son<0)printf("(%lld/%lld)",r.son,r.mom);
		else printf("%lld/%lld",r.son,r.mom);
	}
}
 
fraction add(fraction r1,fraction r2){
	fraction r3;
	r3.son = r1.son*r2.mom + r2.son*r1.mom;
	r3.mom = r1.mom*r2.mom;
	return reduction(r3);
}
 
fraction minu(fraction r1,fraction r2){
	fraction r3;
	r3.son = r1.son*r2.mom - r2.son*r1.mom;
	r3.mom = r1.mom*r2.mom;
	return reduction(r3);
}
 
fraction multi(fraction r1,fraction r2){
	fraction r3;
	r3.son = r1.son*r2.son;
	r3.mom = r1.mom*r2.mom;
	return reduction(r3);
}
 
fraction divide(fraction r1,fraction r2){//不在函数里面做除数是否为0的合法校验 
	fraction r3;
	r3.son = r1.son*r2.mom;
	r3.mom = r1.mom*r2.son;
	return reduction(r3);
}
 
 
int main(){
	
	fraction r1,r2;
	scanf("%lld/%lld %lld/%lld",&r1.son,&r1.mom,&r2.son,&r2.mom);
	
	print(r1);
	printf(" + ");
	print(r2);
	printf(" = ");
	print(add(r1,r2));
	printf("\n");
	
	print(r1);
	printf(" - ");
	print(r2);
	printf(" = ");
	print(minu(r1,r2));
	printf("\n");
	
	print(r1);
	printf(" * ");
	print(r2);
	printf(" = ");
	print(multi(r1,r2));
	printf("\n");
	
	print(r1);
	printf(" / ");
	print(r2);
	printf(" = ");
	if(r2.son!=0)print(divide(r1,r2));
	else printf("Inf");
	printf("\n");
	
	
	
	return 0;
}