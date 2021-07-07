#include <stdlib.h>
#include <stdio.h>

#define MAX 100000
#define COMNUM 9999


void test01()
{
	int i = MAX;
	int count = 0;
	while (i > 0)
	{
		if (i % 6 == 0)
		{
			//printf("%d ", i);
			i--;
			count++;
		}
		else
		{
			int j = i;
			while (j)
			{		
				if (j % 10 == 6)
				{
					//printf("%d ", i);
					count++;
					break;
				}	
				j /= 10;
			}
			i--;
		}
	}
	printf("1.个数是%d\n", count);
}

void test02()
{
	printf("2.0到%d的完数有\n", COMNUM);
	for (int i = 1; i <= COMNUM; i++)
	{
		int result = 0;
		int j = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				result += j;
			}
		}
		if (result == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}


int main(void)
{
	int a = 0;	
	do
	{
		a = 0;
		printf("输入1显示题目1，输入2显示题目2,0结束:>");
		scanf("%d",&a);
		if(a == 1)
		{
			test01();
		}
		if(a == 2)
		{
			test02();
		}
	}while(a);
	
	return 0;
}