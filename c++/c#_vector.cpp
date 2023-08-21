#include<iostream>
#include<vector>

using namespace std;

void main() {
	int i, num;
	cout << "배열의 크기 입력 : "; //cout : 출력 객체
	cin >> num; // cin : 입력 객체

	//vector : 클래스
	//vector<int> arr(num); -> push_back함수 사용시 주석처리
	vector<int> arr; //push_back함수 사용시 사용

	for (i = 0; i < 5; i++) {
		//arr[i] = i;
		arr.push_back(i); //push_back함수의 기능 : i값을 동적으로 할당을 해줌
	}
	for (i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
}