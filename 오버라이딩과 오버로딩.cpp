#include <iostream>
using namespace std;

class Dog {
public:
	void bark() { cout << "mung!" << endl; }
};

class MyDog : Dog {
public:
	void bark() { cout << "wall!" << endl; }
	void bark(bool feed) { cout << "krr akkaka" << endl; }
};

int main() {
	MyDog dog;
	dog.bark(); // �����ε� -> ������ �Լ��� ���ڷ� ����
	dog.bark(true); // �����ε� -> ������ �Լ��� ���ڷ� ����
}