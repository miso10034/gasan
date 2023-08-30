#include<iostream>
using namespace std;

class SingletonClass {
private:
	// �޼ҵ嵵 static ������ �������� ��
	static SingletonClass instance;
	SingletonClass(){}
	~SingletonClass(){}

public:
	// & => ������������ ����
	static SingletonClass& getInstance() {
		return instance;
	}
	void  ShowMessage() {
		cout << "�̱��� ����" << endl;
	}
};
// �̱��� ������ �ʱ�ȭ�� �ܺο��� �������
// :: ���� ���� ������ = ������ ������ => �Ҽ��� ��Ÿ���� ���
SingletonClass SingletonClass::instance;

void main() {
	// �Ϲ����� ��ü ���� ���� 
	// => private�� �����߱⿡ �̷� ���·� ���� �Ұ���
	// => public���� SingletonClass�� �������ָ� ��� ����
	// SingletonClass sc = new SingletonClass();

	// �޼��� ȣ��
	// getInstance() => ���ο��� ������ �ν��Ͻ��� ȣ���ϸ�
	// �������� ��ü�� ����ͼ� ����� �� ����
	// �� �ڵ� ��ü�� instance�� ����
	SingletonClass::getInstance().ShowMessage();

}
// �޸� ���� - c, c++
// 1. ���� �޸� 2. �� �޸�
void Temp() {
	SingletonClass::getInstance();
};