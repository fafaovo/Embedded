#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	char buf_A[20] = { 0 };
	char buf_B[20] = { 0 };
	scanf("%s", buf_A);
	buf_B[0] = buf_A[0]; //������ô�����ֵ�һ��Ԫ�ض��������ظ�
	int straSize = strlen(buf_A); 
	char *pbuf_A = buf_A;
	while (*pbuf_A) //�����ַ���a
	{
		char *pbuf_B = buf_B; //�õ�b����Ԫ�ص�ַ��
		while (*pbuf_B) //ѭ������b����
		{
			if (*pbuf_A == *pbuf_B)
			{ //������������ͬʱ������ѭ��
				break;
			}
			else
			{ 
				pbuf_B++;
			}
		}
		if (!(*pbuf_B)) //�ж��Ƿ�b�ַ���β��
		{
			*pbuf_B = *pbuf_A; 
		}
		pbuf_A++; //����A
	}
	printf("%s\n", buf_B);

	return 0;
}