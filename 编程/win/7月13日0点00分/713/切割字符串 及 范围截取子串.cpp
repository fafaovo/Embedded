//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//#include <iostream>
//using namespace std;

//1.װһ������ʵ�ָ��ݴ��ݵ�ʵ���ַ�ȥ�и��ַ���
void splitstr(char *buf, char a)
{
	int flag = 0;  //���
	char *cur = buf;  //���ڱ�����ָ��
	char *prevcur = buf; //���ڼ�¼�ַ���ͷ��ָ��
	while (*cur)
	{
		if (*cur == a)
		{
			if (flag == 0) //����һ�ν�����ʱ���ӡ��һ��
			{
				printf("��ȡ�����ַ���Ϊ:");
			}
			flag = 1; 
			*cur = '\0'; //���ҵ����ַ���Ϊ\0
			printf("%s ", prevcur);
			cur++; //��������\0
			prevcur = cur;
		}
		cur++;
	}
	if (flag == 1)
	{
		printf("%s\n", prevcur);
	}
	else
	{
		printf("δ�ҵ����ַ�");
	}
	
}

//2.��װһ������ʵ�ֽ�ȡ�ַ�����ָ����Χ���Ӵ�
void getstr(char *buf, int start, int length)
{
	if (strlen(buf) < start + length)
	{
		printf("�����ַ�����Χ");
	}
	char * cur = buf; //һ�����ڱ���
	char * prevcur = buf; //һ�����ڼ�¼start��λ��
	int count = 0; //��¼λ��
	while (*cur)
	{
		if (count == start)
		{
			break;
		}
		count++;
		cur++;
	}
	prevcur = cur;
	count = 0;
	while (*cur)
	{
		if (count == length)
		{
			*cur = '\0';		
			break;
		}
		count++;
		cur++;
	}
	printf("��ȡ���ַ���Ϊ:%s\n", prevcur);

}

//��һ��
void test01()
{
	printf("������Ҫ��ȡ���ַ���\n");
	char buf[200] = { 0 };
	scanf("%[^\n]%*c", &buf); //����ո�����
	char str;
	printf("���������ڽ�ȡ���ַ�\n");
	scanf("%c", &str);

	splitstr(buf, str);

}

//�ڶ���
void test02()
{
	printf("������Ҫ��ȡ���ַ���\n");
	char buf[200] = { 0 };
	int start, length;
	scanf("%[^\n]%*c", &buf); //����ո�����
	fflush(stdin);
	printf("������Ӷ��ٽ�ȡ������λ\n");
	scanf("%d%d", &start, &length);
	getstr(buf, start, length);
}

int main(void)
{
	test01();
	fflush(stdin); //������뻺����
	test02();

	return 0;
}