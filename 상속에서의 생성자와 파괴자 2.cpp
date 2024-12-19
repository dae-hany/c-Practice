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
	// 자식 생성자의 초기화 리스트 이용 ==> 호출될 부모 생성자를 지정할 수 있음. 
	MyDog(int age) : Dog(age) { cout << "Mydog : " << age << endl; }
	~MyDog() { cout << "Goodbye MyDog" << endl; }
};

int main() {
	MyDog dog(10);
	// 1. 부모 생성자 : Dog aged : 10 
	// 2. 자식 생성자 : Mydog : 10 
	// 3. 자식 파괴자 : Goodbye MyDog 
	// 4. 부모 파괴자 : Goodbye Dog 
}