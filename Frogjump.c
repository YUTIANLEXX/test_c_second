#include <stdio.h>
#include <stdlib.h>
int Frogjump(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return n;
	}
	return Frogjump(n - 1) + Frogjump(n - 2);
}
int main()
{
	int n = 0;
	printf("请输入台阶数n：");
	scanf("%d", &n);
	int ret = Frogjump(n);
	printf("青蛙有：%d 种跳法\n", ret);
	system("pause");
	return 0;
}

// Another way to do it
//#include <stdio.h>
//#include <stdlib.h>
//int Frogjump(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return n;
//	}
//	return 2 * Frogjump(n - 1);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入台阶数n：");
//	scanf("%d", &n);
//	int ret = Frogjump(n);
//	printf("青蛙有：%d 种跳法\n", ret);
//	system("pause");
//	return 0;
//}

// Another way to do it
//#include <stdio.h>
//#include <stdlib.h>
//int Frogjump(int n)
//{
//	int last1 = 2;
//	int last2 = 1;
//	int cur = 0;
//	int i = 0;
//	for (i = 3; i <= n; i++)
//	{
//		cur = last1 + last2;
//		last2 = last1;
//		last1 = cur;
//	}
//	return cur;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入台阶数n：");
//	scanf("%d", &n);
//	int ret = Frogjump(n);
//	printf("青蛙有：%d 种跳法\n", ret);
//	system("pause");
//	return 0;
//}