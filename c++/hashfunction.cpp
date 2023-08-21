#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 1

int hashtable[BK][SL];

int hash(int key) {
	return key % 10;
}

void AddKey(int key) {
	int bucket = hash(key);

	// 만약 비어있다면
	if (hashtable[bucket][0] == 0){
		hashtable[bucket][0] = key;
	}
}
void FindKey(int key) {
	int bucket = hash(key);
	return hashtable[bucket][0] == key;
}

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