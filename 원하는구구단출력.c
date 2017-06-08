#include <stdio.h>
void main()
{

	int n = 0, i = 0;
	
	printf("몇단을 출력할지 입력해주세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
	{

		printf("%d * %d = %d\n", n, i, n*i);

	}
}