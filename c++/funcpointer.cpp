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
	
	while (true) { // �Է��� ��� �ޱ� ���ؼ� ���� ������ ����
		printf("���� �� �����Ͻÿ�.(1.���� 2.���� 3.���� 4.���� 5.������) : ");
		scanf_s("%d", &sel);

		switch (sel) {
		case 1:
			fPtr = Plus;
			// �Ϲ������� ���� ȣ�� ����
			// �÷����Լ��� ��ġ �ּҰ��� fPtr�� �־��ְڴ�.
			// Plus�� ������ �ƴ϶� �Լ��̱� ������ &�� ���� �ʾƵ� �ȴ�.

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
		printf("�� ������ �Է��ϼ��� : ");
		scanf_s("%d%d", &i, &j);
		result = fPtr(i, j);
		printf("��� : %d\n", result);
	}
}