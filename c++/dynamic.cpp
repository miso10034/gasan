#include<stdio.h>
#include<stdlib.h>

void main() {
	int num = 0;
	int* student = NULL; // student ������ ���� �޸𸮿� �Ҵ�� ����
	int total = 0;

	printf("�л� ���� �Է��ϼ��� : ");
	scanf_s("%d", &num); //3

	student  = (int*)malloc(sizeof(int) * num); //malloc ������ ���ÿ����� �ٸ� ������ �Ҵ�
	// ������ Ÿ������ ����Ʈ�� �Ҵ�
	// 4 * 3 = 12 ����Ʈ �Ҵ�

	// �������� �޸𸮴� ���������� ������ �� ����
	// ���ÿ����� �޸𸮸� ���ؼ� ���������� �������� ������ �� �ִ�.

	// �ݵ�� �־���ϴ� �˻��ڵ�
	// �����̶�� ������ ���� ���θ� ������ Ȯ��������Ѵ�.
	// �ڵ� ������ �ƴ϶� �������� ���� ġ���� �޸� ������ �߻��Ѵ�.
	if (student == NULL) {
		printf("�޸𸮰� �����Ͽ� �Ҵ��� �� �����ϴ�.\n");
		return;
	}

	//�޸� Ȱ�� -> NULL üũ�� Ȯ�� �� �޸𸮸� Ȱ���ؾ� ������
	for (int i = 0; i < num; i++) {
		printf("%d��° �л��� ���� �Է� : ", i + 1);
		scanf_s("%d", &student[i]);
	}

	for (int i = 0; i < num; i++) {
		total = total + student[i];
	}

	printf("���� :  %d, ��� : %d\n", total, total / num);


	printf("�Ҵ�� �޸� ũ��� %d�Դϴ�.\n", sizeof(int) * num);
	free(student);
}