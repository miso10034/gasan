#include<stdio.h>

// ����� ���� �Լ��� ���� ������ main�Լ� �ۿ� ������ش�.
//int Add(int i, int j) {
//	int res = i + j;
//	return res;
//}
//void main() {
//	int a = 0;
//	int b = 0;
//	
//	printf("�� ���� ������ �Է��ϼ��� : ");
//	scanf_s("%d %d", &a, &b);
//
//	// return���� k�� �޴´�
//	// ȣ������, 10, 20�� ���
//	int k = Add(a, b);
//	printf("%d\n", k);


// �Լ��� ���� ū Ư¡ : ���뼺
//void print_start(){
//	printf("========== Programming Start ===========\n");
//	printf("�� ���� ������ �Է��ϼ��� : ");
//}
//
//void print_hap(int result) {
//	printf("�� ���� ���� %d�Դϴ�.\n", result);
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
//	printf("�� ���� ������ �Է��ϼ��� : ");
//}
//void print_gop(int result) {
//	printf("�� ���� ���� %d�Դϴ�.\n", result);
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
//	printf("�� ���� ������ �Է��ϼ��� : ");
//}
//
//void print_hap(int result) {
//	printf("�� ���� ���� %d�Դϴ�.\n", result);
//	printf("========== Programming Start ===========\n");
//}
// ������ ���� 1���� �������ڷ� �޴� �Լ��� �����.
// �� �Լ��� ����� ���޹��� ������ ������ 2�� ���� �����ϴ� ���̴�.
// �� �Լ��� main���� ȣ���� ����غ���
//int fdouble(int a) {
//	return a * 2;
//}
// �簢���� ���̸� ���ϴ� �Լ�
// �簢���� ���̴� ������ ���� * ������ ���� ���ϱ�
// ����ڷκ��� ������(������ ����, ������ ����)�� ���� �Է� �޾� �Լ��� �������ڷ� �����ϰ�,
// �簢���� ���̸� ����ϴ� �Լ��� �ۼ�����
// �׸��� �� �Լ��� main���� ȣ���ؼ� ����غ���
//void area(int i, int j) {
//	printf("�簢���� ����%d\n", i * j);
//}
//

// ���� ���̸� ���ϴ� �Լ� 
// ���� ���̴� ������ * ������ 3.14�� ���ϸ� �ȴ�. 
// ����ڷκ��� ����(������ ����)�� �Է� �޾� �Լ��� �������ڷ� �����ϰ�
//���� ���̸� ����ϴ� �Լ��� �ۼ�����

//void circle(int r) {
//	printf("���� ����%d\n", r * r * 3.14);
//}

// ��Ģ ���� ���ϱ�, ����, ���ϱ� �����Ⱑ ������ ����� �ۼ�,
// ����ڷκ��� �Է� ���� �� ���� ��Ģ ������ ���� ����϶�
// �� �ڵ�
//void print_start() {
//	printf("========== Programming Start ===========\n");
//	printf("�� ���� ������ �Է��ϼ��� : ");
//}
//void Plus(int a, int b) {
//	printf("�� ���� ���ϱ� : %d�Դϴ�.\n", a + b);
// return a + b; -> ������ �ڵ�
//}
//void Minus(int a, int b) {
//	printf("�� ���� ���� : %d�Դϴ�.\n", a - b);
//}
//void Multiple(int a, int b) {
//	printf("�� ���� ���ϱ� : %d�Դϴ�.\n", a * b);
//}
//void Divide(int a, int b) {
//	printf("�� ���� ������ : %d�Դϴ�.\n", a / b);
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
// print("�� ���� ������ �Է��ϼ��� : ");
// scanf_s("%d%d", &a, &b);

//res = Plus(a,b);
//printf("�� ������ �� : %d\n",res);

//��������
// ���ñ���
//int a, b, c, d, e, f; 
//���� ������ a ���� �Ҹ��� f ����

//void func2() {
//	int local = 20;
//	printf("3��° �޸� �Ҵ� : local = 20\n");
//	printf("3��° �޸� �Ҹ� : local = 20\n");
//}
//void func1(){
//	int local = 10;
//	printf("2��° �޸� �Ҵ� : local = 10\n");
//	func2();
//	printf("2° �޸� �Ҹ� : local = 10\n");
//	
//}
//
//void main() {
//	int val = 0;
//	printf("1��° �޸� �Ҵ� : val = 0\n");
//	func1();
//	printf("1��° �޸� �Ҵ� : val = 0\n");
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