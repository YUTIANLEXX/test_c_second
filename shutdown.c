#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
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
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
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
//		printf("��ĵ��Խ���60���ػ���������������ȡ���ػ�\n");
//		char input[20];
//		scanf("%s", &input);
//		if (strcmp(input, "������") == 0)
//		{
//
//			printf("��������ƭ�㣬������һ���������ҾͰ���ȡ���ػ�\n");
//		a:
//			scanf("%s", &input);
//			if (strcmp(input, "������") == 0)
//			{
//				printf("���ҾͰ���ȡ����");
//				system("shutdown -a");
//				printf("��ĵ�����ȡ���ػ���\n");
//				break;
//			}
//			else
//			{
//				printf("�ڸ���һ�λ���ú�����\n");
//				goto a;
//			}
//		}
//		else
//			printf("�ڸ���һ�λ���ú�����\n");
//	}
//
//	return 0;
//}