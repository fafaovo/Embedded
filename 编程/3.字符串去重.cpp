#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	char buf_A[20] = { 0 };
	char buf_B[20] = { 0 };
	scanf("%s", buf_A);
	buf_B[0] = buf_A[0]; //无论怎么样数字第一个元素都不可能重复
	int straSize = strlen(buf_A); 
	char *pbuf_A = buf_A;
	while (*pbuf_A) //遍历字符串a
	{
		char *pbuf_B = buf_B; //得到b的首元素地址给
		while (*pbuf_B) //循环遍历b数组
		{
			if (*pbuf_A == *pbuf_B)
			{ //当遇到两数相同时候，跳出循环
				break;
			}
			else
			{ 
				pbuf_B++;
			}
		}
		if (!(*pbuf_B)) //判断是否到b字符串尾部
		{
			*pbuf_B = *pbuf_A; 
		}
		pbuf_A++; //迭代A
	}
	printf("%s\n", buf_B);

	return 0;
}