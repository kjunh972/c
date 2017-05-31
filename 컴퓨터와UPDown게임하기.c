#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{

	int answer, input = 0;

	srand(time(NULL));
	answer = rand() % 1000 + 1;

	printf("숫자를 맞쳐보세요 : ");
	scanf("%d", &input);

	while (answer != input)
	{

		if (answer > input)
			printf("UP\n");

		if (answer < input)
			printf("Down\n");

		printf("숫자를 맞쳐보세요 : ");
		scanf("%d", &input);

	}

	printf("정답\n");

}