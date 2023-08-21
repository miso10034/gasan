//#include<stdio.h>
//
//void main() {
//	int i = 0;
//	while (i < 5) {
//		printf("programming\n");
//		i++;
//	}
//}
// 반복문을 사용해 1부터 10까지의 합을 출력하라
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

    //break문
#include<stdio.h>
void main(){
	/*int a = 0;
	while (true)
	{
		if (a > 100) {
			break;
		}
		printf("a값은 %d이다.\n", a);
		a++;
	}
	printf("a는 100보다 크다.\n");*/

	//continue문
	int a = 0;
	while (a < 100)
	{
		a++;
		if (a > 88 && a < 90) {
			continue;
		}
		printf("a의 값은 %d이다.\n", a);
	}
}


