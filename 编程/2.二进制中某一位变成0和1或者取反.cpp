#include <iostream>
using namespace std;


//将第n位变成1
void binaryOne(int a)
{
	printf("你的初始值是%#X\n", a);
	printf("你需要将第几位变成1:>");
	int n;
	scanf_s("%d", &n);
	a |= (1<<(n-1));
	printf("你得到了%#X\n",a);
}



//取反第n位
void Negation(int a)
{
	printf("你的初始值是%#X\n", a);
	printf("你需要将第几位取反:>");
	int n;
	scanf_s("%d", &n);
	a ^= (1 << (n - 1));
	printf("你得到了%#X\n", a);
}

//将第n位变成0
void binaryZero(int a)
{
	printf("你的初始值是%#X\n", a);
	printf("你需要将第几位变成0:>");
	int n;
	scanf_s("%d", &n);
	a &= (~1 << (n - 1));
	// 1左移n位，然后取反他,那么哪一位就会得到0，其他位都是1
	// 然后用a去按位与他
	printf("你得到了%#X\n", a);

	int b = 1;
}

int main()
{
	printf("请输入初始值");
	int a;
	scanf_s("%d", &a);
	binaryOne(a);
	Negation(a);
	binaryZero(a);

	return 0;
}