#include <iostream>
using namespace std;


//����nλ���1
void binaryOne(int a)
{
	printf("��ĳ�ʼֵ��%#X\n", a);
	printf("����Ҫ���ڼ�λ���1:>");
	int n;
	scanf_s("%d", &n);
	a |= (1<<(n-1));
	printf("��õ���%#X\n",a);
}



//ȡ����nλ
void Negation(int a)
{
	printf("��ĳ�ʼֵ��%#X\n", a);
	printf("����Ҫ���ڼ�λȡ��:>");
	int n;
	scanf_s("%d", &n);
	a ^= (1 << (n - 1));
	printf("��õ���%#X\n", a);
}

//����nλ���0
void binaryZero(int a)
{
	printf("��ĳ�ʼֵ��%#X\n", a);
	printf("����Ҫ���ڼ�λ���0:>");
	int n;
	scanf_s("%d", &n);
	a &= (~1 << (n - 1));
	// 1����nλ��Ȼ��ȡ����,��ô��һλ�ͻ�õ�0������λ����1
	// Ȼ����aȥ��λ����
	printf("��õ���%#X\n", a);

	int b = 1;
}

int main()
{
	printf("�������ʼֵ");
	int a;
	scanf_s("%d", &a);
	binaryOne(a);
	Negation(a);
	binaryZero(a);

	return 0;
}