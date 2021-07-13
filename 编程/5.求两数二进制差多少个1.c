#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void test02()
{

	int a;
	int b;
	int arr_a[32] = { 0 };
	int arr_b[32] = { 0 };
	int count = 0;
	scanf("%d%d", &a, &b);
	printf("%d与%d有", a, b);
	for (int i = 0; a  ;i++)
	{
		arr_a[i] = a % 2;
		a /= 2;
	}
	for (int i = 0; b; i++)
	{
		arr_b[i] = b % 2;
		b /= 2;
	}
	for (int i = 0; i < 32;i++)
	{
		if (arr_a[i] != arr_b[i])
			count++;
	}
	printf("%d个二进制位不同\n", count);
	int arr = 0;
}


int main()
{
	test02();
	

	return 0;
}