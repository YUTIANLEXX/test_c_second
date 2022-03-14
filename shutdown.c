#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
//Another way to do it
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//Another way to do it
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("你的电脑将在60秒后关机，请输入我是猪，取消关机\n");
//		char input[20];
//		scanf("%s", &input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//
//			printf("哈哈，我骗你，在输入一次我是猪，我就帮你取消关机\n");
//		a:
//			scanf("%s", &input);
//			if (strcmp(input, "我是猪") == 0)
//			{
//				printf("那我就帮你取消吧");
//				system("shutdown -a");
//				printf("你的电脑已取消关机。\n");
//				break;
//			}
//			else
//			{
//				printf("在给你一次机会好好想想\n");
//				goto a;
//			}
//		}
//		else
//			printf("在给你一次机会好好想想\n");
//	}
//
//	return 0;
//}