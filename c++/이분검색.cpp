//#include<stdio.h>
//
//void main() {
//	int arr[] = { 2,3,4,7,9,13,21,21,29,35,43,52,69,77,81,109,203,729};
//
//	// Ű���� ã�� �ڵ�
//	int key = 29;
//	int index = -1;
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	//�̺� �˻�
//	int upper = size-1; // ���� Ŭ���� upper
//	int middle = 0;
//	int lower = 0;
//
//	while (true) {
//		middle = (upper + lower) / 2;
//
//		if (arr[middle] == key) {
//			index = middle;
//			break;
//		}
//		if (arr[middle] > key) {
//			upper = middle - 1;
//		}
//		else {
//			lower = middle + 1;
//		}
//		if (upper <= lower) {
//			index = -1;
//			break;
//		}
//	}
//
//
//	index = middle;
//
//
//	if (index == -1) {
//		printf("ã�� ���� �����ϴ�.\n");
//	}
//	printf("ã�� ���� %d��°�� �ֽ��ϴ�.\n", index + 1);
//}


//�Լ��� ����
#include<stdio.h>
int bSearch(int* pArr, int aSize, int akey) {

	int upper = aSize - 1; // ���� Ŭ���� upper
	int middle = 0;
	int lower = 0;

	while (true) {
		middle = (upper + lower) / 2;

		if (pArr[middle] == akey) {
			return middle;
		}
		if (pArr[middle] > akey) {
			upper = middle - 1;
		}
		else {
			lower = middle + 1;
		}
		if (upper <= lower) {
			return -1;
		}
	}
}

int main() {
		int arr[] = { 2,3,4,7,9,13,21,21,29,35,43,52,69,77,81,109,203,729 };

		// Ű���� ã�� �ڵ�
		int key = 29;
		int index = -1;
		int size = sizeof(arr) / sizeof(arr[0]);

		index = bSearch(arr, size, key);

		if (index == -1) {
			printf("ã�� ���� �����ϴ�.\n");
		}
		printf("ã�� ���� %d��°�� �ֽ��ϴ�.\n", index + 1);
	}
