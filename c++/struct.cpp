#include<stdio.h>
#include<string.h>

struct student {
	char name[10];
	int age;
	int height;
}st1;

//string : 10byte, int : 4byte
void main() {
	strcpy(st1.name, "�ڽ�Ÿ");
	st1.age = 25;
	st1.height = 200;
	printf("�̸� = %s, ���� = %d, Ű = %d\n", st1.name, st1.age, st1.height);
}