#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char ps[10] = { 0 };
	int i = 0;
	printf("����������:");
	for (i = 0; i<3; i++)
	{
		scanf("%s", ps);
		if (strcmp(ps, "yutianle") == 0)
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
		{
			printf("��������������������룺\n");
		}
	}
	if (3 == i)
	{
		printf("��¼ʧ�ܣ������˳���\n");
	}
	system("pause");
	return 0;
}
