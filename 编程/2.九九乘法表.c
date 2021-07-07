#include <stdio.h>

void multiplication_table()
{
	for (int i = 1; i < 10;i++)
	{
		for (int k = 1; k < i + 1;k++)
		{
			printf(" %d*%d=%-2d", k, i, i*k);
		}
		printf("\n");
	}
}

int main()
{
	multiplication_table();
	return 0;
}