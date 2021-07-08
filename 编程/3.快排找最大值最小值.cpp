//#define _crt_secure_no_warnings 1
//#include <stdio.h>

#include <iostream>
#include <vector>
#include <tchar.h>
using namespace std;


void test03()
{
	char str[] = { 'b', 'c', 'a', '\0', 'i', '0' };
	printf("%d\n", sizeof(str));
	printf("%d\n", strlen(str));


}


void QuickSort(int arr[], int start, int end)
{
	int s = start;
	int e = end;
	if (e > s)
	{
		int temp = arr[s];
		while (e > s)
		{
			while (e > s && arr[e] > temp)
				e--;
			if (e > s)
				arr[s++] = arr[e];
			while (e > s && arr[s] < temp)
				s++;
			if (e > s)
				arr[e--] = arr[s];
		}
		arr[s] = temp;
		QuickSort(arr, start, e - 1);
		QuickSort(arr, s + 1, end);
	}
}

void test01()
{
	//键盘任意输入五个整数,键盘输出最大值和最小值
	int n1, n2, n3, n4, n5;
	scanf_s("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	int arr[5] = { n1, n2, n3, n4, n5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, size - 1);

	cout << "最大值是" << arr[size - 1] << "最小值是" << arr[0] << endl;
}

void test02()
{
	int a = 3, b = 2;
	//a = a + b;
	//b = a - b;
	//a = a - b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	//a = a * b;
	//b = a / b;
	//a = a / b;
	
	cout << "a:" << a << "b:" << b << endl;

	
}



int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}





