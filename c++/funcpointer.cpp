#include <stdio.h>

int Plus(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}
int Multiple(int a, int b) {
	return a * b;
}
int Divide(int a, int b) {
	return a / b;
}
void main() {
	int i, j, sel, result;

	int (*fPtr)(int a, int b) = NULL;
	
	while (true) { // 입력을 계속 받기 위해서 무한 루프를 설정
		printf("다음 중 선택하시오.(1.덧셈 2.뺄셈 3.종료 4.곱셈 5.나눗셈) : ");
		scanf_s("%d", &sel);

		switch (sel) {
		case 1:
			fPtr = Plus;
			// 일반적이지 않은 호출 형태
			// 플러스함수의 위치 주소값을 fPtr에 넣어주겠다.
			// Plus는 변수가 아니라 함수이기 때문에 &를 쓰지 않아도 된다.

			break;
		case 2: 
			fPtr = Minus;
			break;
		case 4:
			fPtr = Multiple;
			break;
		case 5:
			fPtr = Divide;
			break;
		case 3:
			return;
		default:
			break;
		}
		printf("두 정수를 입력하세요 : ");
		scanf_s("%d%d", &i, &j);
		result = fPtr(i, j);
		printf("결과 : %d\n", result);
	}
}