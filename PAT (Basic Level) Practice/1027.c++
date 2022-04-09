#include<stdio.h>
#include<stdbool.h>
struct person{
	char name[10];
	int yy,mm,dd;
}temp,oldest,youngest,left,right;//输入的日期，年龄最老的日期，年龄最小的日期，左边的日期，右边的日期
//和右边的日期进行比较
bool tempRight(struct person t,struct person r){
	if(t.yy!=r.yy) return t.yy<=r.yy;
	else if(t.mm!=r.mm) return t.mm<=r.mm;
	else return t.dd<=r.dd;
}
//和左边的日期进行比较
bool tempLeft(struct person t,struct person l){
	if(t.yy!=l.yy) return t.yy>=l.yy;
	else if(t.mm!=l.mm) return t.mm>=l.mm;
	else return t.dd>=l.dd;
}
//日期初始化
void init(){
	youngest.yy=left.yy=1814;
	oldest.yy=right.yy=2014;
	youngest.mm=oldest.mm=left.mm=right.mm=9;
	youngest.dd=oldest.dd=left.dd=right.dd=6;
}
int main(){
	init();
	int n,cot;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d/%d/%d",temp.name,&temp.yy,&temp.mm,&temp.dd);
		if(tempRight(temp,right)&&tempLeft(temp,left)){
			cot++;//如果输入的日期在合法范围内，计数器计数
			if(tempRight(temp,oldest)) oldest=temp;//如果输入的日期在oldest日期之前，则替换oldest
			if(tempLeft(temp,youngest)) youngest=temp;// 果输入的日期在youngest日期之前，则替换youngest
		}
	}
	if(cot==0) printf("0\n");
	else printf("%d %s %s\n",cot,oldest.name,youngest.name);
	return 0;
} 