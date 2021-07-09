#include <string.h>
#include <stdio.h>

void test04()
{
	char s[256];
	int i = 0, tmp[256] = { 0 };
	printf("请输入字符串:\n");
	scanf("%s", s);
	while (s[i] != '\0')
	{
		tmp[s[i++]] = 1;
		//tmp [ 字符的ASCII码值 ] == 1
		//这样每次拿到这个ASCII都会将他赋值为1
	}
	printf("删除重复字符后为:\n");
	for (i = 0; i < 256; i++) // 遍历哈希表.将非0的数打印出来
	{
		if (tmp[i])
			printf("%c", i);
	}
	printf("\n");

}

int main()
{
	test04();


	return 0;
}