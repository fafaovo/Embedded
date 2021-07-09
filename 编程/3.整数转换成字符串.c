#include <stdio.h>

void test01()
{
	//将一个整数转换成字符串
	char str[20] = { 0 };
	int a;
	int i = 0;
	printf("请输入一个整数");
	scanf("%d", &a);
	while (a)
	{
		int result = a % 10;
		str[i++] = result + '0';
		a /= 10;
	}
	str[i] = '\0';
	char *start = &str[0];  //定义一个数组头
	char *end = &str[i - 1];  //定义一个数组尾
	while (end > start)  //倒置整个char类型的数组
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
	printf("%s\n", str);
}


int main()
{
	test01();
	return 0;
}