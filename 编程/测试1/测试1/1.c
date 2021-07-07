#include <stdio.h>

//将第n位变成1
void binaryOne(int a)
{
	printf("你的初始值是%#X\n", a);
	printf("你需要将第几位变成1:>");
	int n;
	scanf("%d", &n);
	a |= (1<<(n-1));
	printf("你得到了%#X\n",a);
}



//取反第n位
void Negation(int a)
{
	printf("你的初始值是%#X\n", a);
	printf("你需要将第几位取反:>");
	int n;
	scanf("%d", &n);
	a ^= (1 << (n - 1));
	printf("你得到了%#X\n", a);
}

//将第n位变成0
void binaryZero(int a)
{
	//我真的想不出来
	printf("你的初始值是%#X\n", a);
	printf("你需要将第几位变成0:>");
	int n;
	scanf("%d", &n);
	a |= (1 << (n - 1));
	a ^= (1 << (n - 1));
	printf("你得到了%#X\n", a);
}

int main()
{
	printf("请输入初始值");
	int a;
	scanf("%d", &a);
	binaryOne(a);
	Negation(a);
	binaryZero(a);

	return 0;
}