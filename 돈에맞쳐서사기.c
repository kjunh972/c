#include <stdio.h>
int main(void)
{
	int don = 3500;
	int a = 500, b = 700, c = 400, d;
	int i, j, k;

	printf("현재 소유 하고 있는 금액 : %d\n", don);

	for (i = 1; i<10; i++)
	{

		for (j = 1; j<10; j++)
		{

			for (k = 1; k<10; k++)
			{

				d = a*i + b*j + c*k;

				if (don == d)

				{

					printf("크림빵(%d개), 새우깡(%d봉지), 콜라(%d병)\n", i, j, k);

				}

			}

		}

	}

	return 0;

}