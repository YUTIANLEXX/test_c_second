#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	//判断i是否为自幂数
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int tmp = i;
		int sum = 0;
		//计算i的位数
		while (tmp /= 10)
		{
			n++;
		}
		//计算i的每一位的n次方之和
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		//比较i与sum
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}