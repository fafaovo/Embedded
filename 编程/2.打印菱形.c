#include <stdio.h>


void test02()
{
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i += 2)
	{
		int j = (a - i) / 2;
		for (int k = 0; k < j; k++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		for (int k = 0; k < j; k++)
		{
			printf(" ");
		}
		printf("\n");
	}
	for (int i = a - 2; i >= 0; i -= 2)
	{
		int j = (a - i) / 2;
		for (int k = 0; k < j; k++)
		{
			printf(" ");
		}
		for (int k = 0; k < i; k++)
		{
			printf("*");
		}
		for (int k = 0; k < j; k++)
		{
			printf(" ");
		}
		printf("\n");
	}

}




int main(void)
{
	test02();


	return 0;
}