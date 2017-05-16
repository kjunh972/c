#include <stdio.h>
void main()
{

	int i = 0, count = 0;
	printf("반복할 횟수를 입력해주십시오 : ");
	scanf("%d", &count);

	while (1)
	{

		printf("%d\n", i);
		if (i == count)
			break;

		i++;

	}

}