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
			printf("������Ҫ���ܵ����ģ�\n");
			scanf("%s", &text);
			count = strlen(text);
			for (i = 0; i < count; i++)
			{
				cryptograph[i] = text[i] + i + 5;
			}
			cryptograph[i] = '\0';
			printf("���ܺ�������ǣ�%s\n", cryptograph);
		}
		else if (2 == result)
		{
			count = strlen(text);
			for (i = 0; i < count; i++)
			{
				text[i] = cryptograph[i] - i - 5;
			}
			text[i] = '\0';
			printf("���ܺ�������ǣ�%s\n", text);
		}
		else if (3 == result)
		{
			break;
		}
		else
		{
			printf("�������������\n");
		}
		printf("����1�����µ����ģ�����2�Ըղż��ܵ����Ľ��н��ܣ�����3�˳�ϵͳ��\n");
		printf("�������������\n");
		scanf("%d", &result);
	}
	return 0;
}