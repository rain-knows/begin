#define _CRT_SECURE_NO_WARNINGS 1
//斐波那契数列
//用递归实现
//#include<stdio.h>
//int fb(int a)
//{
//	if (a == 2 || a == 1) {
//		return 1;
//	}
//	else {
//		return fb(a - 1) + fb(a - 2);
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	printf("%d",fb(a));
//	return 0;
//}


//用非递归实现 动态规划
#include<stdio.h>
int main()
{
	int a=1, b=1,d;
	int count=2;
	scanf("%d",&d);
	while (count < d) {
		int temp = a + b;
		a = b;
		b = temp;
		count++;
	}
	printf("第%d个为%d", count,b);
	return 0;
}