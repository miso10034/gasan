aa//#include<stdio.h>

//void main() {
//	int arr[3]; // 12바이트 할당
//	int total = 0;
//	double avg = 0.0;
//
//	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
//		printf("%d번째 학생 성적을 입력하쇼 : ", i + 1);
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		total += arr[i];
//	}
//	avg = total / 3;
//
//	printf("총점 : %d\n", total);
//	printf("평균 : %f\n", avg);
//}
//void main() {
//	int arr[] = { 10,20,30,40,50 };
//	int total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
//	printf("배열의 총 합은 %d\n", total);
//}

//void main() {
//	int i = 0;
//	int arr1[3] = { 1,2,3 };
//	int arr2[3];
//
//	//arr2 = arr1; -> lvalue(left) 유발
//
//	// 배열의 복사
//	/*arr2[0] = arr1[0];
//	arr2[1] = arr1[1];
//	arr2[2] = arr1[2];*/
//	for (i = 0; i < 3; i++) {
//		arr2[i] = arr1[i];
//	}
//	/*printf("%d %d %d\n", arr2[0], arr2[1], arr2[2]);*/
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", arr2[i]);
//	}
//	
//}
//void main() {
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5];
//
//	for (int i = 0; i < 5; i++) {
//		arr2[4-i] = arr1[i];
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("배열 arr[%d] = %d\n", i,arr2[i]);
//	}
//}
//void main() {
//	char str[12] = "Hello World";
//	printf("문자열 변경 전\n");
//	printf("%s\n\n", str);
//
//	str[6] = 'k';
//	str[6] = 'o';
//	str[6] = 'r';
//	str[6] = 'e';
//	str[6] = 'a';
//
//	printf("문자열 변경 후 \n");
//	printf("%s\n\n", str);
//}

//#include <stdio.h>
//
//void main() {
//	char a = 'F';
//	int b = 5;
//	char* pA = &a;
//	int* pB = &b;
//	printf("*pA : %c, *pB : %d",*pA,*pB );
//}

//
//#include <stdio.h>
//int Sum(int* a, int* b) {
//	return *a + *b;
//}
//void main() {
//	int a = 0;
//	int b = 0;
//	printf("두 정수를 입력하세요 :");
//	scanf_s("%d %d", &a, &b);
//
//	printf("두 정수의 합은 : %d 입니다.", Sum(&a, &b));
//
//}

//#include<stdio.h>
//void Swap(int* x, int* y) {
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void main() {
//	int x = 7;
//	int y = 3;
//
//	printf("함수 호출 전 x값 : %d, y값 : %d\n\n", x, y);
//
//	Swap(&x, &y);
//
//	printf("함수 호출 후 변경된 x값 : %d, y값 : %d", x, y);
//}

// 읽은 책들의 페이지 수 누적 계산 코드 =>(1)for 문

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

//static 변수 사용

#include<stdio.h>
void main() {
	int input = 1;
	static int sum = 0;

	for (int i = 0; i < input + 1; i++) {
		printf("읽은 페이지 수를 입력하세요 : ");
		scanf_s("%d", &input);
		sum = sum + input;

		if (input == -1) {
			break;
		}
		else {
			printf("지금까지 읽은 책의 페이지는 %d 입니다.", sum);
		}
		return;
	}
}
