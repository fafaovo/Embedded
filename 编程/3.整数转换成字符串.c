#include <stdio.h>

void test01()
{
	//��һ������ת�����ַ���
	char str[20] = { 0 };
	int a;
	int i = 0;
	printf("������һ������");
	scanf("%d", &a);
	while (a)
	{
		int result = a % 10;
		str[i++] = result + '0';
		a /= 10;
	}
	str[i] = '\0';
	char *start = &str[0];  //����һ������ͷ
	char *end = &str[i - 1];  //����һ������β
	while (end > start)  //��������char���͵�����
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