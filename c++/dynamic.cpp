#include<stdio.h>
#include<stdlib.h>

void main() {
	int num = 0;
	int* student = NULL; // student 변수는 스택 메모리에 할당된 상태
	int total = 0;

	printf("학생 수를 입력하세요 : ");
	scanf_s("%d", &num); //3

	student  = (int*)malloc(sizeof(int) * num); //malloc 영역은 스택영역과 다른 영역에 할당
	// 정수형 타입으로 바이트를 할당
	// 4 * 3 = 12 바이트 할당

	// 힙영역의 메모리는 직접적으로 접근할 수 없고
	// 스택영역의 메모리를 통해서 간접적으로 힙영역에 접근할 수 있다.

	// 반드시 넣어야하는 검사코드
	// 말록이라는 영역의 실패 여부를 무조건 확인해줘야한다.
	// 코드 오류가 아니라 존재하지 않은 치명적 메모리 오류가 발생한다.
	if (student == NULL) {
		printf("메모리가 부족하여 할당할 수 없습니다.\n");
		return;
	}

	//메모리 활용 -> NULL 체크를 확인 후 메모리를 활용해야 안전함
	for (int i = 0; i < num; i++) {
		printf("%d번째 학생의 성적 입력 : ", i + 1);
		scanf_s("%d", &student[i]);
	}

	for (int i = 0; i < num; i++) {
		total = total + student[i];
	}

	printf("총점 :  %d, 평균 : %d\n", total, total / num);


	printf("할당된 메모리 크기는 %d입니다.\n", sizeof(int) * num);
	free(student);
}