#include<iostream>
#include<crtdbg.h>
using namespace std;

class SingletonClass {
private:
	static SingletonClass* instance;
	int total;
	SingletonClass() {
		total = 0;
	}
	~SingletonClass() {}

public:
	static SingletonClass* getInstance() {
		if (instance == NULL) {
			instance = new SingletonClass();
		}
			return instance;
	}
	void  ShowMessage() {
		cout << "教臂沛 菩畔" << endl;
	}

	void addValue(int value) {
		total = total + value;
	}

	int getTotalValue() {
		return total;
	}

	void destroy() {
		if (instance != NULL) {
			delete instance;
			instance = NULL;
			cout << "instance 秦力" << endl;
		}
	}
};

SingletonClass* SingletonClass::instance = NULL;

void main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	SingletonClass* ins1 = SingletonClass::getInstance();
	SingletonClass* ins2 = SingletonClass::getInstance();
	SingletonClass* ins3 = SingletonClass::getInstance();

	ins1->addValue(10);
	cout << "total : " << ins1->getTotalValue() << endl;
	ins2->addValue(10);
	cout << "total : " << ins2->getTotalValue() << endl;
	ins3->addValue(10);
	cout << "total : " << ins3->getTotalValue() << endl;

	SingletonClass::getInstance()->destroy();
	// ins1->destory(); 客 悼老
	
}

void Temp() {
	SingletonClass::getInstance();
};