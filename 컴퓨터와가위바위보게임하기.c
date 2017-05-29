#include <stdio.h>
#include <stdlib.h>
void main()
{

	int c = 0, u = 0;

	printf("1 : 가위\n2 : 바위\n3 : 보 \n");
	printf("1,2,3중 하나를 입력해주세요 : ");
	scanf("%d", &u);
	srand(time(NULL));
	c = rand() % 3 + 1;
	if (u == c)
		printf("비겼습니다.\n");
	if (c == 1 && u == 2)
		printf("이겼습니다.\n");
	if (c == 1 && u == 3)
		printf("패배했습니다.\n");
	if (c == 2 && u == 1)
		printf("패배했습니다.\n");
	if (c == 2 && u == 3)
		printf("이겼습니다.\n");
	if (c == 3 && u == 1)
		printf("이겼습니다.\n");
	if (c == 3 && u == 2)
		printf("패배했습니다.\n");
}