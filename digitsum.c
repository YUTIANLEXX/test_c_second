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
	printf("������Ǹ�������");
	scanf("%d", &num);
	int ret = digitsum(num);
	printf("ÿλ֮��Ϊ��%d\n", ret);
	return 0;
}