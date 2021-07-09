#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//名字验证
void test03()
{
	char name[5][20] = { 0 };
	for (int i = 0; i < 5; i++) 
	{
		printf("请输入%d个名字", i+1);
		scanf("%s", name[i]);
		//gets(name[i]);	
	}
	for (int i = 0; i < 5; i++)
	{
		int len = strlen(name[i]);
		if (len > 8)
		{
			printf("第%d个名字长度不能超过八个字符\n", i + 1);
			continue;
		}
		char *p_n_i = name[i];
		int a = 0; //小写
		int A = 0; //大写
		int s = 0; //数字
		while (*p_n_i)
		{
			//进行遍历循环判断是否有其中一个
			if (*p_n_i >= 97 && *p_n_i <= 122)
			{
				a = 1;
			}
			if (*p_n_i >= 65 && *p_n_i <= 90)
			{
				A = 1;
			}
			if (*p_n_i >= 48 && *p_n_i <= 57)
			{
				s = 1;
			}
			p_n_i++;
		}
		if (a == 0 && A == 0)
		{
			printf("第%d个名字缺失字母\n",i+1);
			continue;
		}
		if (a == 0)
		{
			printf("第%d个名字缺失小写字母,请重新输入\n", i + 1);
			continue;
		}
		if (A == 0)
		{
			printf("第%d个名字缺失大写字母,请重新输入\n", i + 1);
			continue;
		}
		if (s == 0)
		{
			printf("第%d个名字缺失数字,请重新输入\n", i + 1);
			continue;
		}
		printf("第%d个名字无误\n", i + 1);
	}
	
}

int main()
{
	test03();


	return 0;
}