#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sys/timeb.h>
#include <stdlib.h>



void test01()
{
	char b[3][10] = { { "hello" }, { "hehe" }, { "gec" } };
	//int k = strlen(b);
	int k = strlen(b[0]) + strlen(b[1]) + strlen(b[2]);
	printf("%d\n", k);
}

void test02()
{
	int arr[5][5] = { 0 };
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++)  //��ʼ������
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 50;
		}
	}
	printf("��ӡ����\n");
	for (int i = 0; i < 5; i++)  //��ʼ������
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++)  //��ʼ������
	{
		for (int j = i + 1; j < 5; j++)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	printf("��ӡ����\n");
	for (int i = 0; i < 5; i++)  //��ӡ����
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void test03()
{
	int *p = (int *)malloc(sizeof(int)*10);  
	int *p1 = (int *)calloc(10,sizeof(int)); 
	p[0] = 12;
	p[1] = 13;
	p[2] = 14;
	printf("%p\n", &p[0]);
	printf("%p\n", &p[1]);
	printf("%p\n", &p[2]);
	free(p);
}

int main()
{
	test03();
	

	return 0;
}