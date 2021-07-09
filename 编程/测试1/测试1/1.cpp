#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <iostream>
//#include <vector>
using namespace std;
//
//
//int main()
//{
//	int arr1[5][6] = { 45, 78, 96 };
//	int arr2[][6] = { 45, 78 };
//	int arr1[][] = { 45, 78 };
//	int arr1[5][] = { 45, 78 };
//	int arr3[5][6] = { { 5 }, { 8, 9 }, { 89, 63 } };
//	int arr4[5][6] = { { 5 }, { 8, 9 }, 89,63 };
//	int arr5[5][6];
//	arr5[0][0] = 99;
//	arr5[1][2] = 67;
//	
//	char b[3][10] = { { "hello" }, { "hehe" }, { "gec" } };
//	int k = strlen(b);
//
//	
//
//
//
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

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
	for (int i = 0; i < 5; i++)  //初始化数组
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)  //初始化数组
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++)  //初始化数组
	{
		for (int j = i + 1; j < 5; j++)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	for (int i = 0; i < 5; i++)  //初始化数组
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	//test02();
	int *p = (int *)malloc(sizeof(int)* 10);
	int *p1 = (int *)calloc(10, sizeof(int));


	int *res = (int *)realloc(p, 40 * sizeof(int));
	if (!res)
	{
		printf("内存开辟失败");
	}
	p = res;



	free(p);
	free(p1);


	

	return 0;
}