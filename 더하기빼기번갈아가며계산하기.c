#include <stdio.h>
void main()
{

	int i = 0, sum = 0, n = 0, a = 1;

	printf("숫자를 입력해주세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{

		sum = sum + i*a;
			a = -a;

	}

	printf("합 : %d\n", sum);

}