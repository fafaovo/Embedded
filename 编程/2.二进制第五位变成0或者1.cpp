#include <iostream>
using namespace std;

//������λ�ĵ���λ���0,����������λ����
void test01(int num)
{
	num &= 0xffffffef;
	//cout  <<  num;
	printf("\t%d\t%#X\n", num, num);
}
//������λ����λ���1,����������λ����
void test02(int num)
{
	num |= 0x00000010;
	//cout  << num;
	printf("\t%d\t%#X\n", num,num);
}
//������λ����λȡ��,����������λ����
void test04(int num)
{
	num ^= 0x00000010;
	printf("\t%d\t%#X\n", num, num);
}


int main(void)
{
	int num = 0;
	scanf_s("%d", &num);
	//cin >> num;
	printf("�������ֵ��%#X\n", num);
	printf("������λ�ĵ���λ���0,����������λ����:\t");
	//cout << "������λ�ĵ���λ���0,����������λ����:\t";
	test01(num);
	printf("������λ�ĵ���λ���1,����������λ����:\t");
	//cout << "������λ�ĵ���λ���1,����������λ����:\t";
	test02(num);
	printf("������λ�ĵ���λȡ��,����������λ����:\t");
	//cout << "������λ�ĵ���λȡ��,����������λ����:\t";
	//test03(num);
	test04(num);

	system("pause");
	return 0;
}