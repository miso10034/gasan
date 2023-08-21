#include<stdio.h>
#include<string.h>

void Swap(char* arr1, char* arr2) {
	char temp;
	//두 자리의 값을 서로 바꿈
	temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
}

void SelectionSort(char* str, int len) {
	int minidx = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < len - 1; i++) {
		//요소끼리 비교
		for (j = i + 1, minidx = i; j < len; j++) {
			if (str[minidx] > str[j]) {
				//최솟값 결정되는 시점(해당 인덱스를 알게되는 순간)
				minidx = j;
			}
		}
		//만약 inidx가 커졌다면(변화했다면)
		//minidx(최솟값)에 변화가 생겼을 때만 swap해주겠다
		if (minidx != i) {
			Swap(&str[minidx], &str[i]);
		}
		
	}
}

void main() {
	char str[] = "winapi";
	char temp;
	int len = strlen(str);

	printf("정렬 전의 문자열 : %s\n", str);
	//정렬하기

	SelectionSort(str, len);
	printf("정렬된 문자열 : %s\n", str);
}
