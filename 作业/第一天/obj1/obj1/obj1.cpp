#include <iostream>
using namespace std;

#define MAX 100000
#define COMNUM 9999


void test01()
{
	int i = MAX;
	int count = 0;
	while (i >= 0)
	{
		if (i % 6 == 0)
		{
			printf("%d ", i);
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
					printf("%d ", i);
					count++;
					break;
				}	
				j /= 10;
			}
			i--;
		}
	}
	printf("\n个数是%d", count);
}

void test02()
{
	printf("0到%d的完数有\n", COMNUM);
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
}

void test03()
{
	int a = 5;
	int b = 0;
	int c = (++a) > b ? a : b;
	cout << c << endl;
}

void test04()
{
	printf("%4d\n", 12);
	printf("%-4d\n", 12);
}

int main(void)
{
	test04();
	return 0;
}