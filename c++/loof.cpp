//#include<stdio.h>
//
//void main() {
//	int i = 0;
//	while (i < 5) {
//		printf("programming\n");
//		i++;
//	}
//}
// �ݺ����� ����� 1���� 10������ ���� ����϶�
//#include<stdio.h>
//
//void main() {
//	int i = 0;
//	int sum = 0;
//	while(i<11){
//		sum += i;
//		i++;
//		
//	}
//	printf("%d",sum);}

    //break��
#include<stdio.h>
void main(){
	/*int a = 0;
	while (true)
	{
		if (a > 100) {
			break;
		}
		printf("a���� %d�̴�.\n", a);
		a++;
	}
	printf("a�� 100���� ũ��.\n");*/

	//continue��
	int a = 0;
	while (a < 100)
	{
		a++;
		if (a > 88 && a < 90) {
			continue;
		}
		printf("a�� ���� %d�̴�.\n", a);
	}
}


