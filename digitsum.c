#include <stdio.h>

int unsigned digitsum(int num)
{
	if (num > 9)
	{
		return digitsum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}

int main()
{
	unsigned int num = 0;
	printf("请输入非负整数：");
	scanf("%d", &num);
	int ret = digitsum(num);
	printf("每位之和为：%d\n", ret);
	return 0;
}