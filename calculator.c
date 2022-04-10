#include <stdio.h>
void menu()
{
	printf("********1.Add 2.Sub********\n");
	printf("********3.Mul 4.Div********\n");
	printf("***********0.exit**********\n");
	printf("***************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x, y = 0;
	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个整数>:");
			scanf("%d %d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (0 == input)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误！\n");
		}
	} while (input);
	return 0;
}