#include <stdio.h>
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}
int get_diff_bit(int m, int n)
{
	int tmp = m^n;
	return count_bit_one(tmp);
}

int main()
{
	int m = 0;
	int n = 0;
	printf("请输入两个不同的整数：");
	scanf("%d %d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("count=%d\n", count);
	return 0;
}

//Another way to do it

//#include <stdio.h>

//int get_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入两个不同的整数：");
//	scanf("%d %d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}