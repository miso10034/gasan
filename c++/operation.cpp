#include<stdio.h>

int main(void) {
	/*int a = 5;
	int b = 2;

	printf("두 수의 합은 %d\n", a + b);
	printf("두 수의 차는 %d\n", a - b);
	printf("두 수의 곱은 %d\n", a * b);
	printf("두 수의 나누기는 %d\n", a / b);
	printf("두 수의 나머지는 %d\n", a % b);*/

	///*int a = 0;
	//int b = 0;
	//int c = 0;

	//scanf_s("%d%d%d/n", &a, &b, &c);
	//printf("세 정수의 합 : %d ", a + b + c);
	//printf("세 정수의 평균 : %d ", (a+b+c)/3);*/

	//대입연산자
	/*int a = 0;
	int b = 0;*/

	/*a = a + b;
	printf("a += b 결과 : %d\n", a);

	a -= b;
	printf("a -= b 결과 : %d\n", a);

	a = a * b;
	printf("a *= b 결과 : %d\n", a);*/

	/* /= b;
	printf("a /= b 결과 : %d\n", a);*/

	//a %= b;
	//printf("a %= b 결과 : %d\n", a);

	//사용자로부터 두개 정수 입력
	int a = 0;
	int b = 0;

	printf("수를 입력하세요 : ");
	scanf_s("%d%d", &a, &b);

	printf("두 수의 합 : %d\n", a + b);
	return 0;

}