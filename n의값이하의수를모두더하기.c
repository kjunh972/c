#include <stdio.h>
void main() {

	int i = 0, sum = 0, n = 0;

	printf("n의 값을 입력하세요 : ");
	scanf("%d" , &n); //n의 값을 입력받기

	while (i < n) {

		i = i + 1;
		sum = sum + i;

	}
	printf("합: %d \n", sum);

}