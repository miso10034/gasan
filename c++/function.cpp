#include<stdio.h>

// 사용자 정의 함수를 만들 때에는 main함수 밖에 만들어준다.
//int Add(int i, int j) {
//	int res = i + j;
//	return res;
//}
//void main() {
//	int a = 0;
//	int b = 0;
//	
//	printf("두 개의 정수를 입력하세요 : ");
//	scanf_s("%d %d", &a, &b);
//
//	// return값을 k가 받는다
//	// 호출인자, 10, 20은 상수
//	int k = Add(a, b);
//	printf("%d\n", k);


// 함수의 가장 큰 특징 : 재사용성
//void print_start(){
//	printf("========== Programming Start ===========\n");
//	printf("두 개의 정수를 입력하세요 : ");
//}
//
//void print_hap(int result) {
//	printf("두 수의 합은 %d입니다.\n", result);
//	printf("========== Programming Start ===========\n");
//
//}
//int Plus(int i, int j) {
//	int res = i + j;
//	return res;
//}
//
//void main() {
//	int a = 0;
//	int b = 0;
//	
//	print_start();
//	scanf_s("%d %d", &a, &b);
//
//	int k = Plus(a, b);
//	print_hap(k);



//void print_start() {
//	printf("=========== Programming Start ============\n");
//	printf("두 개의 정수를 입력하세요 : ");
//}
//void print_gop(int result) {
//	printf("두 수의 곱은 %d입니다.\n", result);
//	printf("=========== Programming Start ============\n");
//	}
//
//int Plus(int i, int j) {
//	int res = i + j;
//	return res;
//}
//int fdouble(int a) {
//	return a * 2;
//}
//
//void main() {
//	int res = fdouble(10);
//	printf("%d\n", res);


// 
//void print_start(){
//	printf("========== Programming Start ===========\n");
//	printf("두 개의 정수를 입력하세요 : ");
//}
//
//void print_hap(int result) {
//	printf("두 수의 합은 %d입니다.\n", result);
//	printf("========== Programming Start ===========\n");
//}
// 정수형 변수 1개를 전달인자로 받는 함수를 만든다.
// 이 함수의 기능은 전달받은 정수형 변수에 2를 곱해 리턴하는 것이다.
// 이 함수를 main에서 호출해 출력해보자
//int fdouble(int a) {
//	return a * 2;
//}
// 사각형의 넓이를 구하는 함수
// 사각형의 넓이는 가로의 길이 * 세로의 길이 구하기
// 사용자로부터 두정수(가로의 길이, 세로의 길이)를 각각 입력 받아 함수의 전달인자로 전달하고,
// 사각형의 넓이를 출력하는 함수를 작성하자
// 그리고 이 함수를 main에서 호출해서 출력해보자
//void area(int i, int j) {
//	printf("사각형의 넓이%d\n", i * j);
//}
//

// 원의 넓이를 구하는 함수 
// 원의 넓이는 반지름 * 반지금 3.14를 구하면 된다. 
// 사용자로부터 정수(반지름 길이)를 입력 받아 함수의 전달인자로 전달하고
//원의 넓이를 출력하는 함수를 작성하자

//void circle(int r) {
//	printf("원의 넓이%d\n", r * r * 3.14);
//}

// 사칙 연산 더하기, 빼기, 곱하기 나누기가 가능한 계산을 작성,
// 사용자로부터 입력 받은 두 수의 사칙 연산을 각각 출력하라
// 내 코드
//void print_start() {
//	printf("========== Programming Start ===========\n");
//	printf("두 개의 정수를 입력하세요 : ");
//}
//void Plus(int a, int b) {
//	printf("두 수의 더하기 : %d입니다.\n", a + b);
// return a + b; -> 교수님 코드
//}
//void Minus(int a, int b) {
//	printf("두 수의 빼기 : %d입니다.\n", a - b);
//}
//void Multiple(int a, int b) {
//	printf("두 수의 곱하기 : %d입니다.\n", a * b);
//}
//void Divide(int a, int b) {
//	printf("두 수의 나누기 : %d입니다.\n", a / b);
//}
//void main(){
//	print_start();
//	//scanf_s("%d %d");
//	Plus(5,7);
//	Minus(5,3);
//	Multiple(2,3);
//	Divide(3,3);

// int a;
// int b;
// int res;
// print("두 개의 정수를 입력하세요 : ");
// scanf_s("%d%d", &a, &b);

//res = Plus(a,b);
//printf("두 정수의 합 : %d\n",res);

//지역변수
// 스택구조
//int a, b, c, d, e, f; 
//생성 순서는 a 부터 소멸은 f 부터

//void func2() {
//	int local = 20;
//	printf("3번째 메모리 할당 : local = 20\n");
//	printf("3번째 메모리 소멸 : local = 20\n");
//}
//void func1(){
//	int local = 10;
//	printf("2번째 메모리 할당 : local = 10\n");
//	func2();
//	printf("2째 메모리 소멸 : local = 10\n");
//	
//}
//
//void main() {
//	int val = 0;
//	printf("1번째 메모리 할당 : val = 0\n");
//	func1();
//	printf("1번째 메모리 할당 : val = 0\n");
//}

//int global;
//
//int Plus(int i, int j) {
//	int k = i + j;
//	global = i + j;
//	return k;
//}
//
//void main() {
//	int res = Plus(10, 20);
//	printf("%d\n", res);
//	printf("%d\n", global);


}