aa//#include<stdio.h>

//void main() {
//	int arr[3]; // 12����Ʈ �Ҵ�
//	int total = 0;
//	double avg = 0.0;
//
//	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
//		printf("%d��° �л� ������ �Է��ϼ� : ", i + 1);
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		total += arr[i];
//	}
//	avg = total / 3;
//
//	printf("���� : %d\n", total);
//	printf("��� : %f\n", avg);
//}
//void main() {
//	int arr[] = { 10,20,30,40,50 };
//	int total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
//	printf("�迭�� �� ���� %d\n", total);
//}

//void main() {
//	int i = 0;
//	int arr1[3] = { 1,2,3 };
//	int arr2[3];
//
//	//arr2 = arr1; -> lvalue(left) ����
//
//	// �迭�� ����
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
//		printf("�迭 arr[%d] = %d\n", i,arr2[i]);
//	}
//}
//void main() {
//	char str[12] = "Hello World";
//	printf("���ڿ� ���� ��\n");
//	printf("%s\n\n", str);
//
//	str[6] = 'k';
//	str[6] = 'o';
//	str[6] = 'r';
//	str[6] = 'e';
//	str[6] = 'a';
//
//	printf("���ڿ� ���� �� \n");
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
//	printf("�� ������ �Է��ϼ��� :");
//	scanf_s("%d %d", &a, &b);
//
//	printf("�� ������ ���� : %d �Դϴ�.", Sum(&a, &b));
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
//	printf("�Լ� ȣ�� �� x�� : %d, y�� : %d\n\n", x, y);
//
//	Swap(&x, &y);
//
//	printf("�Լ� ȣ�� �� ����� x�� : %d, y�� : %d", x, y);
//}

// ���� å���� ������ �� ���� ��� �ڵ� =>(1)for ��

//#include<stdio.h>
//
//int sum = 0;
//
//void main() {
//	//������ ���� 1������ ���� �����ϱ� ����
//	int input = 1;
//
//	for (int i = 0; i < input + 1; i++) {
//		printf("���� å�� ������ ���� �Է��ϼ��� : \n");
//		scanf_s("%d", &input);
//		sum = sum + input;
//
//		if (input == -1) {
//			break;
//		}
//		else {
//			printf("���� ������ ���� : %d�Դϴ�.\n", sum);
//
//		}
//	}

//static ���� ���

#include<stdio.h>
void main() {
	int input = 1;
	static int sum = 0;

	for (int i = 0; i < input + 1; i++) {
		printf("���� ������ ���� �Է��ϼ��� : ");
		scanf_s("%d", &input);
		sum = sum + input;

		if (input == -1) {
			break;
		}
		else {
			printf("���ݱ��� ���� å�� �������� %d �Դϴ�.", sum);
		}
		return;
	}
}
