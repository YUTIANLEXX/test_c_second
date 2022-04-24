// A: B 2,我3   B:我2，E 4   C:我1，D 2   D:C最后,我3   E:我4，A 1
// 比赛后，选手说对了一半

#include <stdio.h>
int main()
{
	int a, b, c, d, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((a == 3) + (b == 2)) == 1 &&
							((b == 2) + (e == 4)) == 1 &&
							((c == 1) + (d == 2)) == 1 &&
							((c == 5) + (d == 3)) == 1 &&
							((e == 4) + (a == 1)) == 1)
						{
							if (a*b*c*d*e == 120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}