#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 5

int hashtable[BK][SL];

int hash(int key) {
	return key % 10;
}

void AddKey(int key) {
	int bucket = hash(key);

	for (;;)
	{
		// ���� ����ִٸ�
		if (hashtable[bucket][0] == 0) {
			hashtable[bucket][0] = key;
		}
		else {
			bucket = bucket + 1;
		}
	}

}
int FindKey(int key) {
	int bucket = hash(key);

	for (;;) {
		if (hashtable[bucket][0] == 0) {
			return hashtable[bucket][0] == key;
			break;
		}
		else {
			bucket = bucket + 1;
		}
	}
}

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