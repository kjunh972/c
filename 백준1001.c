#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a = 0, b = 0; //변수선언

	scanf("%d", &a); //두 수 A와 B를 입력
	scanf("%d", &b);

	printf("%d", a - b); //A-B를 출력

	return 0;
}