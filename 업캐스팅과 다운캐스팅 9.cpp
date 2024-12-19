// 추상 클래스 : 순수 가상 함수(virtual)을 하나라도 가지고 있는 클래스 
// 순수 가상 함수 : 부모 클래스에서 interface만 정의, 구현은 자식 클래스에서 

#include <iostream>
using namespace std;

// 추상 클래스 : 인터페이스만 정의 
class Animal {
public:
	virtual void eat() {}	// virtual void eat() = 0; 
	virtual void cry() {}	// virtual void cry() = 0;
	virtual void sleep() {} // virtual void sleep() = 0;
};

// 자식 클래스에서 interface를 구현 
class Dog : public Animal {
public:
	virtual void eat() { cout << "냠냠냠" << endl; }
	virtual void cry() { cout << "월월월" << endl; }
	virtual void sleep() { cout << "쿨쿨쿨" << endl; }
};

// 자식 클래스에서 interface를 구현 
class Cat : public Animal {
public:
	virtual void eat() { cout << "오고곡" << endl; }
	virtual void cry() { cout << "냐오옹" << endl; }
	virtual void sleep() { cout << "흠냠냠" << endl; }
};

void frameworkMain(Animal* a) {
	a->eat();
	a->cry();
	a->sleep();
}

int main() {
	Dog d; Cat c;
	frameworkMain(&d); 
	frameworkMain(&c);
}