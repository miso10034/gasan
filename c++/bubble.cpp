#include<stdio.h>
#include<string.h>

void Swap(char* arr1,char* arr2) {
	char temp;
	//�� �ڸ��� ���� ���� �ٲ�
	temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
}

void SelectionSort(char* str, int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 1; j < len - i; j++) {
			if (str[j - 1] > str[j]) {
				Swap(&str[j - 1], &str[j]);
			}
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
	