#include<iostream>
#include<vector>

using namespace std;

void main() {
	int i, num;
	cout << "�迭�� ũ�� �Է� : "; //cout : ��� ��ü
	cin >> num; // cin : �Է� ��ü

	//vector : Ŭ����
	//vector<int> arr(num); -> push_back�Լ� ���� �ּ�ó��
	vector<int> arr; //push_back�Լ� ���� ���

	for (i = 0; i < 5; i++) {
		//arr[i] = i;
		arr.push_back(i); //push_back�Լ��� ��� : i���� �������� �Ҵ��� ����
	}
	for (i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
}