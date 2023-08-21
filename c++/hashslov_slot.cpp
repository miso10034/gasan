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
		// ���� ����ִٸ�
		if (hashtable[bucket][i] == 0) {
			hashtable[bucket][i] = key;
			break; // or return; ã������ ������ 

		}
	}
}
bool FindKey(int key) {
	int bucket = hash(key);
	//sl��ŭ �ݺ��ϸ鼭 �ش� �ε����� Ž���� �ϸ鼭 Ű���� ��
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
		printf("�Է��� ���� �Է��ϼ��� : "); scanf_s("%d", &key);
		AddKey(key);
	}


	printf("�˻��� ���� �Է��ϼ��� : "); scanf_s("%d", &key);
	if (FindKey(key)) {
		printf("�˻��Ǿ����ϴ�.\n");
	}
	else {
		printf("�����ϴ�.\n");
	}
}