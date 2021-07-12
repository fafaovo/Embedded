#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string>
#include <stdlib.h>


//删除子串
void test01()
{
	char buf_A[30] = { 0 };
	char buf_B[30] = { 0 };
	printf("请输入子串\n");
	gets(buf_B);
	printf("请输入主串\n");
	gets(buf_A);
	int Asize = strlen(buf_A); //A字符串的大小
	int Bsize = strlen(buf_B); //B字符串的大小
	char * pbuf_A = buf_A;

	while (*pbuf_A)
	{
		if (strncmp(pbuf_A, buf_B, Bsize))
		{
			pbuf_A++;
		}
		else
		{
			char* cur = pbuf_A;  //待删除数的头
			char* curNext = pbuf_A + Bsize; //待删除数的尾
			strcpy(cur, curNext); //将尾拷贝到头
		}
	}
	printf("%s", buf_A);
}

//找出现最多的字符
void test02()
{
	char buf_A[30];
	scanf("%s", buf_A);
	int HX[256] = { 0 };
	int i = 0;
	while (buf_A[i] != '\0')
	{
		HX[buf_A[i++]]+=1;
	}
	int Max_s = 0; //字符出现次数
	int Max_c = 0; //字符的ASCII码值
	for (int i = 0; i < 256;i++)
	{
		if (HX[i] > Max_s)
		{
			Max_c = i;
			Max_s = HX[i];
		}
			
	}
	printf("字符%c出现次数最多,出现了%d次", Max_c, Max_s);
}

//找出现重复次数最多的数
void test04()
{
	char buf_A[30];
	scanf("%s", buf_A);
	char max_char = *buf_A; //出现次数最多的字符是第一个字符
	int max_count = 1; //出现了1次
	int count = 1; //某字符出现字数
	char *cur = buf_A; //一个主循环的指针
	char *cur1 = buf_A; //一个在主循环中查找是否有相同的指针
	char *curNext = buf_A+1; //一个在主循环中查找是否有相同的指针
	while (*cur)
	{
		//进来后,先让cur1指向cur curnext指向下一位
		cur1 = cur;
		curNext = cur + 1;
		//然后循环遍历数组剩下元素
		while (*curNext)
		{
			if (*cur1 == *curNext) //当出现相等时,curNext自增 记录出现次数的count++
			{
				curNext++;
				count++;
			}
			else  //如果不相等了就跳出循环
			{
				cur = curNext;
				cur--;
				break;
			}

				
		}
		//判断记录的count是否大于max_count
		if (count > max_count)
		{
			max_count = count;
			max_char = *cur1;
		}
		//将count重置为1,然后让未动的指针往后挪一位,进行下一次判断
		count = 1;
		cur++;
	}
	printf("出现最多的字符是%c,出现了%d次", max_char, max_count);
}

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
	test04();


	return 0;
}