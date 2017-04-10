#include <stdio.h>
void main() {

	int i = 0, sum = 0, n = 0;

	printf("n의 값을 입력 하세요 : ");
	scanf("%d", &n);

	while (i < n) {

		i = i + 1;

		if (i % 2 == 0) {

			sum = sum + i;
		}
	}

	printf("합 : %d \n", sum);

}