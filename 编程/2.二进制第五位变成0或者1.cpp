#include <iostream>
using namespace std;

//二进制位的第五位变成0,其他二进制位不变
void test01(int num)
{
	num &= 0xffffffef;
	//cout  <<  num;
	printf("\t%d\t%#X\n", num, num);
}
//二进制位第五位变成1,其他二进制位不变
void test02(int num)
{
	num |= 0x00000010;
	//cout  << num;
	printf("\t%d\t%#X\n", num,num);
}
//二进制位第五位取反,其他二进制位不变
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
	printf("你输入的值是%#X\n", num);
	printf("二进制位的第五位变成0,其他二进制位不变:\t");
	//cout << "二进制位的第五位变成0,其他二进制位不变:\t";
	test01(num);
	printf("二进制位的第五位变成1,其他二进制位不变:\t");
	//cout << "二进制位的第五位变成1,其他二进制位不变:\t";
	test02(num);
	printf("二进制位的第五位取反,其他二进制位不变:\t");
	//cout << "二进制位的第五位取反,其他二进制位不变:\t";
	//test03(num);
	test04(num);

	system("pause");
	return 0;
}