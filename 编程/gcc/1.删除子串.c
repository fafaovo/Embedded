#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//删除子串
void test01()
{
	char buf_A[30] = { 0 };
	char buf_B[30] = { 0 };
	
	
	printf("请输入子串\n");
	//fgets(buf_B, 30, stdin);
	scanf("%[^\n]%*c",buf_B);
	printf("请输入主串\n");
	//fgets(buf_A, 30, stdin);
	scanf("%[^\n]%*c",buf_A); //使用正则表达式让scanf只识别\n
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
	printf("删除子串后:\n%s\n", buf_A);
}

int main()
{
	test01();
	
	return 0;
}