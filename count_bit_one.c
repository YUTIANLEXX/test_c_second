#include <stdio.h>

int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}

int main()
{
	int a = 0;
	printf("请输入正整数：\n");
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("count=%d\n", count);
	return 0;
}

//Another way to do it
//#include <stdio.h>

//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//

//int main()
//{
//	int a = 0;
//	printf("请输入整数：\n");
//	scanf("%d", &a);
//	int count= count_bit_one(a);
//	printf("count=%d\n",count);
//		return 0;
//}
//
//Another way to do it
//#include <stdio.h>
//int count_bit_one( int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//		return count;
//}
//

//int main()
//{
//	int a = 0;
//	printf("请输入整数：\n");
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}
//
//Another way to do it
//#include <stdio.h>
//int count_bit_one( int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//

//int main()
//{
//	int a = 0;
//	printf("请输入整数：\n");
//	scanf("%d", &a);
//	int count= count_bit_one(a);
//	printf("count=%d\n",count);
//		return 0;
//}