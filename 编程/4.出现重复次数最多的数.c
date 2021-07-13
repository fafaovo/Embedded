#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	printf("请输入出现重复次数最多的数\n");
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
	printf("出现最多的字符是%c,出现了%d次\n", max_char, max_count);
}

int main()
{
	test04();
	
	return 0;
}