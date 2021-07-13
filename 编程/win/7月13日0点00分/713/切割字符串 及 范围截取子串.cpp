//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//#include <iostream>
//using namespace std;

//1.装一个函数实现根据传递的实参字符去切割字符串
void splitstr(char *buf, char a)
{
	int flag = 0;  //标记
	char *cur = buf;  //用于遍历的指针
	char *prevcur = buf; //用于记录字符串头的指针
	while (*cur)
	{
		if (*cur == a)
		{
			if (flag == 0) //当第一次进来的时候打印这一串
			{
				printf("截取出的字符串为:");
			}
			flag = 1; 
			*cur = '\0'; //将找到的字符置为\0
			printf("%s ", prevcur);
			cur++; //用于跳过\0
			prevcur = cur;
		}
		cur++;
	}
	if (flag == 1)
	{
		printf("%s\n", prevcur);
	}
	else
	{
		printf("未找到该字符");
	}
	
}

//2.封装一个函数实现截取字符串中指定范围的子串
void getstr(char *buf, int start, int length)
{
	if (strlen(buf) < start + length)
	{
		printf("超出字符串范围");
	}
	char * cur = buf; //一个用于遍历
	char * prevcur = buf; //一个用于记录start的位置
	int count = 0; //记录位置
	while (*cur)
	{
		if (count == start)
		{
			break;
		}
		count++;
		cur++;
	}
	prevcur = cur;
	count = 0;
	while (*cur)
	{
		if (count == length)
		{
			*cur = '\0';		
			break;
		}
		count++;
		cur++;
	}
	printf("截取的字符串为:%s\n", prevcur);

}

//第一题
void test01()
{
	printf("请输入要截取的字符串\n");
	char buf[200] = { 0 };
	scanf("%[^\n]%*c", &buf); //允许空格输入
	char str;
	printf("请输入用于截取的字符\n");
	scanf("%c", &str);

	splitstr(buf, str);

}

//第二题
void test02()
{
	printf("请输入要截取的字符串\n");
	char buf[200] = { 0 };
	int start, length;
	scanf("%[^\n]%*c", &buf); //允许空格输入
	fflush(stdin);
	printf("请输入从多少截取到多少位\n");
	scanf("%d%d", &start, &length);
	getstr(buf, start, length);
}

int main(void)
{
	test01();
	fflush(stdin); //清空输入缓冲区
	test02();

	return 0;
}