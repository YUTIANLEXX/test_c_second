#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char ps[10] = { 0 };
	int i = 0;
	printf("请输入密码:");
	for (i = 0; i<3; i++)
	{
		scanf("%s", ps);
		if (strcmp(ps, "yutianle") == 0)
		{
			printf("登录成功。\n");
			break;
		}
		else
		{
			printf("密码输入错误，请重新输入：\n");
		}
	}
	if (3 == i)
	{
		printf("登录失败，程序退出。\n");
	}
	system("pause");
	return 0;
}
