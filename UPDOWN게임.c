#include <stdio.h>
void main()
{

	int answer = 0, input = 0;

	printf("숫자를 하나 정하세요 : ");
	scanf("%d", &answer);
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