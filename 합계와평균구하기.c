#include <stdio.h>
int main( )
{
	int a = 100 , b = 67 , c = 60 , d = a+b+c , f = 'B';
	float e = (float)d/3;

	printf("국어점수 : %d\n",a);//a의 변수를 %d로 서식후 출력함
	printf("영어점수 : %d\n",b);//b의 변수를 %d로 서식후 출력함
	printf("수학점수 : %d\n",c);//c의 변수를 %d로 서식후 출력함
	printf("합계점수 : %d\n",d);//d의 변수를 %d로 서식후 출력함
	printf("평균점수 : %.2f\n",e);//e의 변수를 %.2f로 서식후 출력함
	printf("등급 : %c\n",f);//f의 변수를 %c로 서식후 출력함

	return 0;
}
