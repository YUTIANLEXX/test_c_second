#include <stdio.h>
#include <string.h>
int main()
{
	int result = 1;
	int i = 0;
	int count = 0;
	char text[128] = { '\0' };
	char cryptograph[128] = { '\0' };

	while (1)
	{
		if (result == 1)
		{
			printf("请输入要加密的明文：\n");
			scanf("%s", &text);
			count = strlen(text);
			for (i = 0; i < count; i++)
			{
				cryptograph[i] = text[i] + i + 5;
			}
			cryptograph[i] = '\0';
			printf("加密后的密文是：%s\n", cryptograph);
		}
		else if (2 == result)
		{
			count = strlen(text);
			for (i = 0; i < count; i++)
			{
				text[i] = cryptograph[i] - i - 5;
			}
			text[i] = '\0';
			printf("解密后的明文是：%s\n", text);
		}
		else if (3 == result)
		{
			break;
		}
		else
		{
			printf("请输入命令符：\n");
		}
		printf("输入1加密新的明文，输入2对刚才加密的密文进行解密，输入3退出系统：\n");
		printf("请输入命令符：\n");
		scanf("%d", &result);
	}
	return 0;
}