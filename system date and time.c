#include <stdio.h>
#include <time.h>
int main()
{
	int command[4] = { 0, 1, 2, 3 };
	int num = 0;
	struct tm *systime;
	printf("�����������������0��\n");
	printf("�������������\n");
	while (1)
	{
		scanf("%d", &num);
		if (command[0] == num)
		{
			printf("��������1��ʾϵͳ���ڣ���������2��ʾϵͳʱ�䣬��������3�˳�ϵͳ��\n");

		}
		else if (command[1] == num)
		{
			time_t nowtime;
			time(&nowtime);
			systime = localtime(&nowtime);
			printf("ϵͳʱ�䣺%d-%d-%d \n", 1900 + systime->tm_year, systime->tm_mon + 1, systime->tm_mday);

		}
		else if (command[2] == num)
		{
			time_t nowtime;
			time(&nowtime);
			systime = localtime(&nowtime);
			printf("ϵͳʱ�䣺%d:%d:%d \n", systime->tm_hour, systime->tm_min, systime->tm_hour);
		}
		else if (command[3] == num)
		{
			return 0;
		}
		printf("�������������\n");
	}
	return 0;
}