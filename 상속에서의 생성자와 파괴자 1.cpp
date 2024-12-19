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
	// 1. 부모 생성자 : Dog (부모의 기본 생성자)
	// 2. 자식 생성자 : Mydog : 10 
	// 3. 자식 파괴자 : Goodbye MyDog 
	// 4. 부모 파괴자 : Goodbye Dog 
}