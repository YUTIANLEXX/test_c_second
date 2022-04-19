#include <stdio.h>

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	//if (money == 0)
	//{
	//	total = 0;
	//}
	//else
	//	total = 2 * money - 1;
	printf("total=%d\n", total);
	return 0;
}