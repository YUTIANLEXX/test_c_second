// A:������   B:C   C:D   D:c�ں�˵
//������˵���滰��һ������˵�ٻ�
#include <stdio.h>

int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("������%c\n", killer);
		}
	}
	return 0;
}