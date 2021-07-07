#include <stdio.h>


void test01()
{
	int a, n;
	long result = 0;
	printf("请输入a的值和n的值\n");
	scanf("%d%d", &a, &n);
	for (int i = 1; i <= n; i++) //外层循环,用于处理a + aa 的次数
	{
		long Mag = 1; // 倍率
		for (int k = 0; k < i; k++) //内层循环,用于得到a..aa..aaa并且将他们累加
		{
			result += Mag*a; //累加  倍率*输入的a
			Mag *= 10;
		}
	}
	printf("%ld\n", result);
}


int main()
{
	test01();

	return 0;
}