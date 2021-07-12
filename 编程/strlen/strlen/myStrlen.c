#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>




int main()
{
	double count = 1;
	int i = 3;
	int fh = 0;
	while (abs(count) >= 1e-6)
	{
		if (fh == 0)
		{
			fh = 1;
			count -= 1.0 / (double)i;
		}
		else
		{
			fh = 0;
			count += 1.0 / (double)i;
		}
		i+=2;
	}
	printf("%lf\n", count);



	system("pause");
	return 0;
}