#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 5

int hashtable[BK][SL];

int hash(int key) {
	return key % 10;
}

/// //////////////////////////////
void AddKey(int key) {
	int bucket = hash(key);

	for (int i = 0; i < SL; i++) {
		// 만약 비어있다면
		if (hashtable[bucket][i] == 0) {
			hashtable[bucket][i] = key;
			break; // or return; 찾았으면 나오기 

		}
	}
}
bool FindKey(int key) {
	int bucket = hash(key);
	//sl만큼 반복하면서 해당 인덱스를 탐색을 하면서 키값과 비교
	for (int i = 0; i < SL; i++) {
		if (hashtable[bucket][i] == key) {
			return true;
		}
	}
	return false;
}
/// ///////////////////////////////////////////

void main() {
	int key = 0;
	memset(hashtable, 0, sizeof(hashtable));

	for (int i = 0; i < 5; i++) {
		printf("입력할 값을 입력하세요 : "); scanf_s("%d", &key);
		AddKey(key);
	}


	printf("검색할 값을 입력하세요 : "); scanf_s("%d", &key);
	if (FindKey(key)) {
		printf("검색되었습니다.\n");
	}
	else {
		printf("없습니다.\n");
	}
}