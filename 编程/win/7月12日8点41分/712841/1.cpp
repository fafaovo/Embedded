#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <iostream>
#include <list>
using namespace std;

void test02()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int(*pa)[10] = &a;

	int *parr[3] = { &a[0], &a[1], &a[2] };

	for (int i = 0; i < 3; i++)
	{
		cout << *parr[i] << endl;
	}


	char buf1[10] = "hello";
	char buf2[10] = "world";
	char buf3[10] = "gec";

	char *buf4[10] = { buf1, buf2, buf3 };


	for (int i = 0; i < 3; i++)
	{
		cout << buf4[i] << endl;
	}


	printf("a的地址\t#%p : %d\n", a, a);
	printf("&a的地址\t%#p : %d\n", &a, &a);
	printf("a[0]的地址\t%#p : %d\n", a[0], a[0]);
	printf("&a[0]的地址\t%#p : %d\n", &a[0], &a[0]);

	printf("a+1的地址\t%#p : %d\n", a + 1, a + 1);
	printf("&a+1的地址\t%#p : %d\n", &a + 1, &a + 1);
	printf("a[0]+1的地址:\t%#p : %d\n", a[0] + 1, a[0] + 1);
	printf("&a[0]+1的地址\t%#p : %d\n", &a[0] + 1, &a[0] + 1);



	printf("\n%d\n", *(*(&a + 1) - 1));
}

void test01()
{
	int x[] = { 10, 20, 30 };
	int *px = x;
	printf("%d", ++*px);
	printf("%d", *px);
	px = x;
	printf("%d", (*px)++);
	printf("%d", *px);
	px = x;
	printf("%d", *px++);
	printf("%d", *px);
	px = x;
	printf("%d", *++px);
	printf("%d", *px);
}

void test03()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);
	printf("%d, %d\n", *(a + 1), *(ptr - 1));
}

void test04()
{
	char nn[4][3] = { "12", "34", "56", "78" }, *pn[4];
	int k, s = 0;
	for (k = 0; k < 4; k++)
		pn[k] = nn[k];
	for (k = 1; k < 4; k += 2)
		s = s * 10 + pn[k][1] - '0';
	printf("%d\n", s);
}
void test05()
{
	char  buf[5][10] = { "hello", "world", "china" };
	char *p = &buf[1][3];
	char *q = &buf[2][1];
	printf("q-p  is:%d\n", q - p);
}

void test06()
{
	char *s[] = { "one", "two", "three" }, *p;
	p = s[1];
	printf("%c,%s\n", *(p + 1), s[0]);
}


void test07()
{
	//test06();
	int *p = (int*)0x67a9;
	cout << p << endl;
	p = (int*)0xaa66;
	cout << p << endl;

}



int main(void)
{
	int arr[3][4] = { { 4, 2 }, { 3, 4 }, { 9, 8, 7, 6 } };
	cout << *(*(arr + 2) + 3) << endl;
	cout << arr[2][3] << endl;
	cout << *(**(&arr + 1) - 1) << endl;


	
	return 0;

}