#define _CRT_SECURE_NO_WARNINGS 1
//쳲���������
//�õݹ�ʵ��
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


//�÷ǵݹ�ʵ�� ��̬�滮
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
	printf("��%d��Ϊ%d", count,b);
	return 0;
}