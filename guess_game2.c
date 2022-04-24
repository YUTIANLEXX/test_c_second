// A:不是我   B:C   C:D   D:c在胡说
//三个人说了真话，一个人在说假话
#include <stdio.h>

int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("凶手是%c\n", killer);
		}
	}
	return 0;
}