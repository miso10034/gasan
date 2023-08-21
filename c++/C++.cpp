//
// //읽은 책들의 페이지 수 누적 계산 코드 =>(1)for 문
//
//#include<stdio.h>
//
//int sum = 0;
//
//void main() {
//	//페이지 수는 1페이지 부터 시작하기 때문
//	int input = 1;
//
//	for (int i = 0; i < input + 1; i++) {
//		printf("읽은 책의 페이지 수를 입력하세요 : \n");
//		scanf_s("%d", &input);
//		sum = sum + input;
//
//		if (input == -1) {
//			break;
//		}
//		else {
//			printf("최종 페이지 수는 : %d입니다.\n", sum);
//
//		}
//	}
//
//	// static 변수 사용
//
//#include<stdio.h>
//	void main() {
//		int input = 1;
//		static int sum = 0;
//
//		for (int i = 0; i < input + 1; i++) {
//			printf("읽은 페이지 수를 입력하세요 : ");
//			scanf_s("%d", &input);
//			sum = sum + input;
//
//			if (input == -1) {
//				break;
//			}
//			else {
//				printf("지금까지 읽은 책의 페이지는 %d 입니다.", sum);
//			}
//			return;
//		}
//	}

// while문 사용 - 전역변수
//#include<stdio.h>
//int main() {
//	static int sum = 0;
//	int input = 1;
//
//	while (1) {
//		printf("읽은 페이지 수를 입력하세요 : \n");
//		scanf_s("%d", &input);
//
//		if (input == -1) {
//			break;
//		}
//		sum = sum + input;
//		printf("최종 누적 페이지 : %d\n",sum );
//	}
//}
//#include<stdio.h>
//void main() {
//	int k[100];
//	int sum = 0;
//
//	for (int i = 0; i < 100; i++) {
//		k[i] = i+1;
//		//printf("%d\n", i);
//		sum += k[i];
//	}
//	printf("합계 : %d", sum);
//}

//#include<stdio.h>
//
//void main() {
//	int x[2];
//
//	printf("두 개의 정수를 입력하세요 : ");
//	scanf_s("%d %d", &x[0], &x[1]);
//
//	printf("x[0]값 : %d, x[1]값 : %d\n", x[0], x[1]);
//	
//	if (x[0] > x[1]) {
//		printf("최댓값 : %d", x[0]);
//	}
//	else if (x[0] == x[1]) {
//		printf("두 정수는 동일합니다.");
//	}
//	else {
//		printf("최댓값 : %d", x[1]);
//	}
//}

//#include<stdio.h>
//
//void Swap(int a, int b) {
//
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("Swap 후 a : %d이고 b :%d이다.", a, b);
//}
//
//void main() {
//	int a = 2;
//	int b = 3;
//	printf("Swap전 a : %d이고 b :%d이다.\n", a, b);
//	Swap(a, b);
//}
	
//#include<stdio.h>
//
//void main() {
//	int a = 2;
//	int b = 3;
//	
//	int temp = a;
//	a = b;
//	b = temp;
//
//}
//#include<stdio.h>
//void main() {
//	int arr[100];
//	int input = 0;
//	int count = 0;
//
//	for (int i = 0; i < 100; i++) {
//
//		printf("arr[%d]의 값을 입력하세요 : ", i);
//		scanf_s("%d", &arr[i]);
//		if(arr[i] == -1) {
//			break;
//		}
//		count++;
//	}
//	for (int i = 0; i < count; i++) {
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//
//}
//값에 의한 호출 방식에 의거해서 함수를 호출하되, 두 개의 값을 바꾸는 함수인 Swap() 함수를 작성한다.
//main() 함수에서 Swap 함수 호출 전 값을 출력하고, 함수 안에서 변경 후 값을 출력하고, 마지막으로 함수 밖에서 값을 출력하도록 한다.
#include<stdio.h>
void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	printf("변경 후 값 => a = %d, b= %d\n", a, b);
	//값을 반환하지 않기 때문에 Swap 함수의 반환 타입을 void로 설정해줘야한다.
}

int main() {
	int a = 3;
	int b = 7;
	printf("변경 전 값 => a = %d, b= %d\n", a, b);
	Swap(a, b);
	return 0;
}
//일반적으로 main 함수가 int를 반환하는 형태로 정의되어 있기 때문에
//return 문은 종료 코드를 반환하는데 사용됩니다
//종료 코드 0은 보통 프로그램이 성공적으로 실행되었음


