//
// //���� å���� ������ �� ���� ��� �ڵ� =>(1)for ��
//
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
//
//	// static ���� ���
//
//#include<stdio.h>
//	void main() {
//		int input = 1;
//		static int sum = 0;
//
//		for (int i = 0; i < input + 1; i++) {
//			printf("���� ������ ���� �Է��ϼ��� : ");
//			scanf_s("%d", &input);
//			sum = sum + input;
//
//			if (input == -1) {
//				break;
//			}
//			else {
//				printf("���ݱ��� ���� å�� �������� %d �Դϴ�.", sum);
//			}
//			return;
//		}
//	}

// while�� ��� - ��������
//#include<stdio.h>
//int main() {
//	static int sum = 0;
//	int input = 1;
//
//	while (1) {
//		printf("���� ������ ���� �Է��ϼ��� : \n");
//		scanf_s("%d", &input);
//
//		if (input == -1) {
//			break;
//		}
//		sum = sum + input;
//		printf("���� ���� ������ : %d\n",sum );
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
//	printf("�հ� : %d", sum);
//}

//#include<stdio.h>
//
//void main() {
//	int x[2];
//
//	printf("�� ���� ������ �Է��ϼ��� : ");
//	scanf_s("%d %d", &x[0], &x[1]);
//
//	printf("x[0]�� : %d, x[1]�� : %d\n", x[0], x[1]);
//	
//	if (x[0] > x[1]) {
//		printf("�ִ� : %d", x[0]);
//	}
//	else if (x[0] == x[1]) {
//		printf("�� ������ �����մϴ�.");
//	}
//	else {
//		printf("�ִ� : %d", x[1]);
//	}
//}

//#include<stdio.h>
//
//void Swap(int a, int b) {
//
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("Swap �� a : %d�̰� b :%d�̴�.", a, b);
//}
//
//void main() {
//	int a = 2;
//	int b = 3;
//	printf("Swap�� a : %d�̰� b :%d�̴�.\n", a, b);
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
//		printf("arr[%d]�� ���� �Է��ϼ��� : ", i);
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
//���� ���� ȣ�� ��Ŀ� �ǰ��ؼ� �Լ��� ȣ���ϵ�, �� ���� ���� �ٲٴ� �Լ��� Swap() �Լ��� �ۼ��Ѵ�.
//main() �Լ����� Swap �Լ� ȣ�� �� ���� ����ϰ�, �Լ� �ȿ��� ���� �� ���� ����ϰ�, ���������� �Լ� �ۿ��� ���� ����ϵ��� �Ѵ�.
#include<stdio.h>
void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	printf("���� �� �� => a = %d, b= %d\n", a, b);
	//���� ��ȯ���� �ʱ� ������ Swap �Լ��� ��ȯ Ÿ���� void�� ����������Ѵ�.
}

int main() {
	int a = 3;
	int b = 7;
	printf("���� �� �� => a = %d, b= %d\n", a, b);
	Swap(a, b);
	return 0;
}
//�Ϲ������� main �Լ��� int�� ��ȯ�ϴ� ���·� ���ǵǾ� �ֱ� ������
//return ���� ���� �ڵ带 ��ȯ�ϴµ� ���˴ϴ�
//���� �ڵ� 0�� ���� ���α׷��� ���������� ����Ǿ���


