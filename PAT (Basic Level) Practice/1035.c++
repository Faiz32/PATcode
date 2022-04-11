#include <bits/stdc++.h> // 万能头文件
using namespace std;

const int N = 111;
int origin[N], temOri[N], changed[N];//原始序列、原始序列备份、目标数组
int n;

bool isSame(int a[], int b[]) {
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) return false;
	}
	return true;
}

void showArrary(int a[], int n) {
	printf("%d", a[0]);
	for (int i = 1; i < n; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");
}


void mergeSort() {
	bool flag = false;
	for (int step = 2; step / 2 <= n; step *= 2) {
		if (step != 2 && isSame(temOri, changed)) {//不是初始序列并且与changed相同 
			flag = true;
		}
		for (int i = 0; i < n; i += step) {//以当前步长进行一次归并排序 
			sort(temOri + i, temOri + min(i + step, n));//在每一个步长序列中进行排序，使用min是怕最后加上步长会超过n 
		}
		if (flag == true) {//与changed相同输出刚刚排序完的数组并结束函数 
			showArrary(temOri,n);
			return;
		}
	}
}

bool insertSort() {
	bool flag = false;
	for (int i = 1; i < n; i++) {
		if (i != 1 && isSame(temOri, changed)) {//不是初始序列并且与changed相同 
			flag = true;
		}
		//判断成功之后顺便再此基础上进行插入排序下一个步骤
		int tmp = temOri[i];
		int j;
		for (j = i - 1; temOri[j] > tmp; j--) {
			temOri[j + 1] = temOri[j];
		}
		temOri[j + 1] = tmp;
		if (flag == true) {
			return true;
		}
	}
	return false;
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &origin[i]);
		temOri[i] = origin[i];
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &changed[i]);
	}
	if (insertSort()) {//若是插入排序，则已完成下一个步骤 
		printf("Insertion Sort\n");
		showArrary(temOri, n);
	}
	else {
		printf("Merge Sort\n");
		for (int i = 0; i < n; i++) {
			temOri[i] = origin[i];//再还原一下数组来进行归并排序
		}
		mergeSort();
	}
//	system("pause");
	return 0;
}
