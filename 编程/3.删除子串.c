#include <stdio.h>

void test03()
{
	char buf_A[20] = { 0 };
	char buf_B[20] = { 0 };
	printf("请输入原字符\n");
	scanf("%s", buf_A);
	printf("请输入删除字符串的\n");
	scanf("%s", buf_B);
	char* pbuf_A = buf_A;
	while (*pbuf_A)
	{
		char* pbuf_B = buf_B;
		while (*pbuf_B)
		{
			if (*pbuf_A == *pbuf_B || (*pbuf_A) + 32 == *pbuf_B || (*pbuf_A) - 32 == *pbuf_B)
			{
				char *cur = pbuf_A;
				while (*cur)
				{
					*cur = *(cur + 1);
					cur += 1;
				}
			}
			else
			{
				pbuf_B += 1;
			}
		}
		pbuf_A += 1;
	}
	*pbuf_A = '\0';
	printf("删除后的字符串为%s\n", buf_A);
}

int main()
{
	test03();
	
	return 0;
}