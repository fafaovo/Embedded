#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	//char str[100];
	int num;
	cin >> num;
	if (num == 0)
		return 0;
	int count = 0;
	while (num)
	{
		if (num = num / 3)
		{
			num += 1;
			count++;
		}
		else if (num == 0)
		{
			count++;
		}
		else
		{
			if (num == 2)
			{
				count++;
			}
		}
	}
	cout << count << endl;


	system("pause");
	return 0;
}