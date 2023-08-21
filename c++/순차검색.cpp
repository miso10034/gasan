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

	//주어진 배열 안에서 특정 키를 찾는 기능
	//순차검색 -> 값을 하나하나 75와 비교해서 대조해보기
	int size = sizeof(arr) / sizeof(arr[0]); // 배열의 길이

	index = fSearch(arr, size, key);
	
	if (index == -1) {
		printf("찾는 값은 없습니다.\n");
	}
	printf("찾는 값은 %d번째에 있습니다.\n", index + 1);
}


