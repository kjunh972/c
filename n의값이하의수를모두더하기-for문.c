#include <stdio.h>
int main() {

	int i = 0, sum = 0, n = 0;

	printf("n의 값을 입력하세요 : ");
	scanf("%d" , &n);

	for (i = 1; i <= n; i++) {

		sum+=i;

}

	printf("합 : %d", sum);
	return 0;

}
