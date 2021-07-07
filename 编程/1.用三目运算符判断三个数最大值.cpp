//#include <iostream>
//using namespace std;
#include <stdio.h>

//#define MAX((a),(b)) (a) : (b) ? (a) : (b)


int main(void)
{
	int num1, num2, num3;
	scanf("%d%d%d", &num1, &num2, &num3);
	//cin >> num1 >> num2 >> num3;
	int num4 = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
	//cout << num4 << endl;
	


	//int num5 = MAX(num1 > num2 ? num1 : num2, num3);
	printf("%d\n", num4);

	return 0;
}