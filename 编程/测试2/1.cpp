#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string>
#include <stdlib.h>


//ɾ���Ӵ�
void test01()
{
	char buf_A[30] = { 0 };
	char buf_B[30] = { 0 };
	printf("�������Ӵ�\n");
	gets(buf_B);
	printf("����������\n");
	gets(buf_A);
	int Asize = strlen(buf_A); //A�ַ����Ĵ�С
	int Bsize = strlen(buf_B); //B�ַ����Ĵ�С
	char * pbuf_A = buf_A;

	while (*pbuf_A)
	{
		if (strncmp(pbuf_A, buf_B, Bsize))
		{
			pbuf_A++;
		}
		else
		{
			char* cur = pbuf_A;  //��ɾ������ͷ
			char* curNext = pbuf_A + Bsize; //��ɾ������β
			strcpy(cur, curNext); //��β������ͷ
		}
	}
	printf("%s", buf_A);
}

//�ҳ��������ַ�
void test02()
{
	char buf_A[30];
	scanf("%s", buf_A);
	int HX[256] = { 0 };
	int i = 0;
	while (buf_A[i] != '\0')
	{
		HX[buf_A[i++]]+=1;
	}
	int Max_s = 0; //�ַ����ִ���
	int Max_c = 0; //�ַ���ASCII��ֵ
	for (int i = 0; i < 256;i++)
	{
		if (HX[i] > Max_s)
		{
			Max_c = i;
			Max_s = HX[i];
		}
			
	}
	printf("�ַ�%c���ִ������,������%d��", Max_c, Max_s);
}

//�ҳ����ظ�����������
void test04()
{
	char buf_A[30];
	scanf("%s", buf_A);
	char max_char = *buf_A; //���ִ��������ַ��ǵ�һ���ַ�
	int max_count = 1; //������1��
	int count = 1; //ĳ�ַ���������
	char *cur = buf_A; //һ����ѭ����ָ��
	char *cur1 = buf_A; //һ������ѭ���в����Ƿ�����ͬ��ָ��
	char *curNext = buf_A+1; //һ������ѭ���в����Ƿ�����ͬ��ָ��
	while (*cur)
	{
		//������,����cur1ָ��cur curnextָ����һλ
		cur1 = cur;
		curNext = cur + 1;
		//Ȼ��ѭ����������ʣ��Ԫ��
		while (*curNext)
		{
			if (*cur1 == *curNext) //���������ʱ,curNext���� ��¼���ִ�����count++
			{
				curNext++;
				count++;
			}
			else  //���������˾�����ѭ��
			{
				cur = curNext;
				cur--;
				break;
			}

				
		}
		//�жϼ�¼��count�Ƿ����max_count
		if (count > max_count)
		{
			max_count = count;
			max_char = *cur1;
		}
		//��count����Ϊ1,Ȼ����δ����ָ������Ųһλ,������һ���ж�
		count = 1;
		cur++;
	}
	printf("���������ַ���%c,������%d��", max_char, max_count);
}

//������֤
void test03()
{
	char name[5][20] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		printf("������%d������", i+1);
		scanf("%s", name[i]);
		//gets(name[i]);	
	}
	for (int i = 0; i < 5; i++)
	{
		int len = strlen(name[i]);
		if (len > 8)
		{
			printf("��%d�����ֳ��Ȳ��ܳ����˸��ַ�\n", i + 1);
			continue;
		}
		char *p_n_i = name[i];
		int a = 0; //Сд
		int A = 0; //��д
		int s = 0; //����
		while (*p_n_i)
		{
			if (*p_n_i >= 97 && *p_n_i <= 122)
			{
				a = 1;
			}
			if (*p_n_i >= 65 && *p_n_i <= 90)
			{
				A = 1;
			}
			if (*p_n_i >= 48 && *p_n_i <= 57)
			{
				s = 1;
			}
			p_n_i++;
		}
		if (a == 0 && A == 0)
		{
			printf("��%d������ȱʧ��ĸ\n",i+1);
			continue;
		}
		if (a == 0)
		{
			printf("��%d������ȱʧСд��ĸ,����������\n", i + 1);
			continue;
		}
		if (A == 0)
		{
			printf("��%d������ȱʧ��д��ĸ,����������\n", i + 1);
			continue;
		}
		if (s == 0)
		{
			printf("��%d������ȱʧ����,����������\n", i + 1);
			continue;
		}
		printf("��%d����������\n", i + 1);
	}
	
}

int main()
{
	test04();


	return 0;
}