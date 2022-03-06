#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret*i;
		}
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}
// Another way to do it!
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
