#include<stdio.h>

int fSearch(int *pArr, int aSize, int akey ){
	for (int i = 0; i < aSize; i++) {
		if (pArr[i] == akey) {
			return i;
		}
	}
	return -1;
}

void main() {
	int arr[] = { 23,47,19,63,57,26,75,73,82,89,47,11 };
	int key = 75;
	int index = -1;	

	//�־��� �迭 �ȿ��� Ư�� Ű�� ã�� ���
	//�����˻� -> ���� �ϳ��ϳ� 75�� ���ؼ� �����غ���
	int size = sizeof(arr) / sizeof(arr[0]); // �迭�� ����

	index = fSearch(arr, size, key);
	
	if (index == -1) {
		printf("ã�� ���� �����ϴ�.\n");
	}
	printf("ã�� ���� %d��°�� �ֽ��ϴ�.\n", index + 1);
}


