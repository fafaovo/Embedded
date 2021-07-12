#include "obj.h"


/*
有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去
掉不满足条件的排列。
*/
void test01()
{
	int count = 0;
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			for (int k = 1; k < 5; k++)
			{
				if (i != j && j != k && i != k)
				{
					cout << i << j << k << " ";
					count++;
				}
			}
		}
	}
	cout << "\n有" << count << "种排序方式" << endl;
}

/*
企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高
于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
1.程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。
*/
void test02()
{
	double bonus1 = 100000 * 0.1;  //10w
	double  bonus2 = bonus1 + 100000 * 0.075; //10w-20w
	double  bonus3 = bonus2 + 200000 * 0.05;  //20w-40w
	double  bonus4 = bonus3 + 200000 * 0.03;  //40w-60w
	double  bonus5 = bonus4 + 400000 * 0.015; //60w-100w
	long meney;
	cin >> meney;
	if (meney <= 100000)
		cout << "利润是" << meney * 0.1;
	else if (meney <= 200000)
		cout << "利润是" << bonus1 + (meney - 100000) * 0.075;
	else if (meney <= 400000)
		cout << "利润是" << bonus2 + (meney - 200000) * 0.05;
	else if (600000)
		cout << "利润是" << bonus3 + (meney - 400000) * 0.03;
	else if (meney <= 1000000)
		cout << "利润是" << bonus4 + (meney - 600000) * 0.015;
	else if (meney > 1000000)
		cout << "利润是" << bonus5 + (meney - 1000000) * 0.01;
}
/*
一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
1.程序分析：在10万以内判断，先将该数加上100后再开方，再将该数加上268后再开方，如果开方后
的结果满足如下条件，即是结果。请看具体分析
*/
/*
题目：输入某年某月某日，判断这一天是这一年的第几天？
1.程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊
情况，闰年且输入月份大于3时需考虑多加一天。
*/
void test03()
{
	int y, m, d;
	printf("\n请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
	scanf("%d,%d,%d", &y, &m, &d);
	//cin >> y >> "." >> m >> "." >> d;
	int a = d; //求月的天数
	switch (m)	
	{
	case 12: a += 30;
	case 11: a += 31; 
	case 10: a += 30; 
	case 9: a += 31; 
	case 8: a += 31; 
	case 7: a += 30; 
	case 6: a += 31;
	case 5: a += 30;
	case 4: a += 31;
	case 3: a += 28;
	case 2: a += 31;
	case 1: a += 0;
		break;
	default:
		break;
	}
	if (a != d)
	{
		if (m > 2)
		{
			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			{
				a += 1;
			}
		}
		printf("你输入的%d年%d月%d日,是这个月的第%d天", y, m, d, a);
	}
	


}
//题目：输入三个整数x,y,z，请把这三个数由小到大输出。
void exChange(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void test04()
{
	int x, y, z;
	printf("输入三个整数x,y,z，请把这三个数由小到大输出,格式x, y, z\n");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y)
		exChange(&x, &y);
	if (x > z)
		exChange(&x, &z);
	if (y > z)
		exChange(&y, &z);	
	printf("从小到大分别是%d,%d,%d\n", x, y, z);
}
//用*号输出字母C的图案。
void test05()
{
	printf(" ****\n");
	printf("*    \n");
	printf("*    \n");
	printf("*    \n");
	printf(" ****\n");
}
//九九乘法表
void test06()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			printf(" %d*%d=%-2d", i, j, i*j);
		}
		printf("\n");
	}
}
/*
题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
*/
int fbnq(int n)
{
	if (n <= 1)
		return n == 0 ? 0 : 1;
	else
		return fbnq(n - 1) + fbnq(n - 2);
}

void test07()
{
	cout << fbnq(20) << endl;
}

void test08()
{
	for (int i = 101; i <= 202;i ++)
	{
		for (int j = i; j < sqrt(i);j ++)
		{
			if (j % 2 == 1)
			{
				cout << j << endl;
			}
		}

	}




}