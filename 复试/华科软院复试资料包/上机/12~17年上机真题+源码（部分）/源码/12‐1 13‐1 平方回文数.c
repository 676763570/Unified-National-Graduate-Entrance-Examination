#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_palindrome(int num) {
	int arr[4];// 定义整型数组来存放num的各位上的数字，num最多4位，所以数组长度定为4，arr是array的简写
	int pos = 0;// 表示当前要填充到arr的第几位
	while (num != 0) {
		arr[pos] = num % 10;// 每次取末后一位填充到arr中
		pos++;// 填充位右移
		num /= 10;// 截断末后一位
	}
	
	// 假设num为123，此时arr应为[1,2,3]，pos=3
	// 下面使用双下标法来判断回文  |   |
	// 定义一头一尾两个下标变量   p1  p2
	
	int p1 = 0, p2 = pos-1;
	while (p1 <= p2) {// 一旦两个下标相撞，说明整个数组已经遍历完成
		// 如果是回文数，那么头尾下标逐渐等速靠近的过程中对应的数字一定相等，反之不是回文数
		if (arr[p1] != arr[p2])
			return false;
		p1++; p2--;// 头下标p1，尾下标p2同时靠近一位
	}
	return true;
}

int main(void) {
	printf("100以上，1000以下的回文数有：\n\n");
	// 需要输出的数要满足两个条件：1.100以上，1000以下  2.是回文数
	for (int i = 11; i < sqrt(1000); i++) {
		int num = i * i;// 枚举100以上1000以内的平方数（条件1）
		if (is_palindrome(num))// 如果是回文数则输出（条件2）
			printf("%d\n", num);
	}
	
	return 0;
}