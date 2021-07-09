#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	char buf_A[100];
	char buf_B[100];
	scanf("%s", buf_A);
	scanf("%s", buf_B);
	int HX[256] = { 0 };
	for (int i = 0; i < (int)strlen(buf_B);i++)
	{
		HX[buf_B[i]] = 1;
	}
	for (int i = 0; i < (int)strlen(buf_A); i++)
	{
		if (HX[buf_A[i]] == 1 || )
		{
			for (int k = i; k < (int)strlen(buf_A); k++)
			{
				buf_A[k] = buf_A[k + 1];
			}
		}
	}



	return 0;
}