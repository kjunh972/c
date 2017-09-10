#include <stdio.h>

void main()
{

	int i = 0, n = 0;

	printf("구구단을 할 수를 입력해주세요 : ");
	scanf("%d", &n);


		for (i = 9; 0<i<10; i--)
		{
			if (i == 0)
			{

				break;

			}
			
			printf("%d X %d = %d \n", n, i, n*i);

		}

		return 0;
}