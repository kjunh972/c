#include <stdio.h>
int main()
{

	int a;

	printf("숫자를 입력해주세요 : ");
	scanf("%d", &a);
	while (a >= 0)
	{
		printf("%d\n", a);
		a--;
	}


	return 0;
}