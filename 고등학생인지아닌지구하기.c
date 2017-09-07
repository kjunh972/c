#include <stdio.h>
int main()
{

	int age = 0;

	printf("나이를 입력해주세요 : ");
	scanf("%d", &age);

	switch (age)
	{
	case 17:
		printf("고등학생 1학년입니다.\n");
		break;

	case 18:
		printf("고등학생 2학년입니다.\n");
		break;

	case 19:
		printf("고등학생 3학년입니다.\n");
		break;

	default:
		printf("고등학생이 아닙니다.\n");
		break;

	}

	return 0;
}