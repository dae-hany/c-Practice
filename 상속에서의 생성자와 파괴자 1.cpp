#include <iostream>
using namespace std;

class Dog {
public:
	Dog() { cout << "Dog" << endl; }
	Dog(int age) { cout << "Dog aged " << age << endl; }
	~Dog() { cout << "Goodbye Dog" << endl; }
	void bark() { cout << "Mung!" << endl; }
};

class MyDog : public Dog {
public:
	MyDog(int age) { cout << "Mydog : " << age << endl; }
	~MyDog() { cout << "Goodbye MyDog" << endl; }
};

int main() {
	MyDog dog(10);
	// 1. �θ� ������ : Dog (�θ��� �⺻ ������)
	// 2. �ڽ� ������ : Mydog : 10 
	// 3. �ڽ� �ı��� : Goodbye MyDog 
	// 4. �θ� �ı��� : Goodbye Dog 
}