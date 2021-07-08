#include <stdio.h>

int main(void)
{
	int a;
	printf("请输入数组大小\n");
	scanf("%d", &a);
	int arr[a];  //变成数组
	for(int i = 0;i < a;i++)  //输入数组每个元素
	{
		int b;
		scanf("%d", &b);
		arr[i] = b;
	} 
	int ret = 0;
	for(int i = 0;i < a;i++)
	{
		ret += arr[i];
	}
	int count = 0;
	ret/= a;
	for(int i = 0;i < a;i++)
	{
		if(arr[i] >= ret)
			count++;
	}
	printf("有%d个元素大于等于平均值\n",count);
	
	
	return 0;
}