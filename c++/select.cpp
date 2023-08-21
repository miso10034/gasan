#include<stdio.h>
#include<string.h>

void Swap(char* arr1, char* arr2) {
	char temp;
	//�� �ڸ��� ���� ���� �ٲ�
	temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
}

void SelectionSort(char* str, int len) {
	int minidx = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < len - 1; i++) {
		//��ҳ��� ��
		for (j = i + 1, minidx = i; j < len; j++) {
			if (str[minidx] > str[j]) {
				//�ּڰ� �����Ǵ� ����(�ش� �ε����� �˰ԵǴ� ����)
				minidx = j;
			}
		}
		//���� inidx�� Ŀ���ٸ�(��ȭ�ߴٸ�)
		//minidx(�ּڰ�)�� ��ȭ�� ������ ���� swap���ְڴ�
		if (minidx != i) {
			Swap(&str[minidx], &str[i]);
		}
		
	}
}

void main() {
	char str[] = "winapi";
	char temp;
	int len = strlen(str);

	printf("���� ���� ���ڿ� : %s\n", str);
	//�����ϱ�

	SelectionSort(str, len);
	printf("���ĵ� ���ڿ� : %s\n", str);
}
