#include <stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	printf("ret=%d\n", ret);
	return 0;
}

//Another way to do it
//#include <stdio.h>
//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入要求的阶乘的整数：");
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//Another way to do it
//#include <stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac(n - 1);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入要求的阶乘的整数：");
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}