#include<iostream>
using namespace std;

class SingletonClass {
private:
	// 메소드도 static 변수를 사용해줘야 함
	static SingletonClass instance;
	SingletonClass(){}
	~SingletonClass(){}

public:
	// & => 참조형식으로 리턴
	static SingletonClass& getInstance() {
		return instance;
	}
	void  ShowMessage() {
		cout << "싱글톤 패턴" << endl;
	}
};
// 싱글톤 패턴의 초기화는 외부에서 해줘야함
// :: 영역 결정 연산자 = 스코프 연산자 => 소속을 나타낼때 사용
SingletonClass SingletonClass::instance;

void main() {
	// 일반적인 객체 생성 형태 
	// => private로 생성했기에 이런 형태로 생성 불가능
	// => public으로 SingletonClass를 정의해주면 사용 가능
	// SingletonClass sc = new SingletonClass();

	// 메서드 호출
	// getInstance() => 내부에서 생성한 인스턴스를 호출하면
	// 언제든지 객체를 갖고와서 사용할 수 있음
	// 이 코드 자체가 instance를 뜻함
	SingletonClass::getInstance().ShowMessage();

}
// 메모리 생성 - c, c++
// 1. 스택 메모리 2. 힙 메모리
void Temp() {
	SingletonClass::getInstance();
};