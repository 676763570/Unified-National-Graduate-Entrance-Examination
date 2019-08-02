// 比较经典的做法是用链表实现
// 但是链表的代码实现比较复杂而且很容易写错
// 所以这里用一种比较偷懒的做法
#include <stdio.h>
#include <stdbool.h>

int N, C;
bool is_out[1000];

int go(int p) {
	do p = (p+1) % N;
	while (is_out[p] == true);
	return p;
}

int main(void) {
	printf("请输入人数:");
	scanf("%d", &N);
	printf("请输入出局密码:");
	scanf("%d", &C);
	
	int out_man = 0;
	int p = N-1;
	while (out_man < N) {
		for (int k = 0; k < C; k++)
			p = go(p);
		is_out[p] = true;
		printf("%d 出列\n", p+1);
		out_man++;
	}
}