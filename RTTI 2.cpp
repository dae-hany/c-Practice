/*
typeid : 런타임에서, 타입 정보를 제공하는 연산자 
	1. 클래스에 가상 함수가 하나라도 있다면
	2. 클래스마다 가상 함수 테이블이 존재하게 되고 
	3. 런타임에 정확한 타입을 확인할 수 있다. 
*/

#include <iostream> 
using namespace std;

class Animal {
public:
	void cry() { cout << "crrrr" << endl; }
};

class Dog : public Animal {
public:
	int color;
};

void foo(Animal* p) {
	p->cry();
}

// Animal과 Dog 클래스에서는 가상 함수가 없으므로 
// 가상 함수 테이블이 없다.
// 따라서, 런타임에서 두 객체를 구분할 수 없다. 
int main() {
	Animal a;
	Dog d;

	cout << typeid(Animal).name() << endl; // class Animal
	cout << typeid(a).name() << endl;	   // class Animal

	cout << typeid(Dog).name() << endl;    // class Dog
	cout << typeid(d).name() << endl;      // class Dog

	Animal* p = &a;
	const type_info& t1 = typeid(*p);	   // p가 가리키고 있는 타입 : Animal
	cout << t1.name() << endl;			   // class Animal

	p = &d;
	const type_info& t2 = typeid(*p);	   // p가 가리키고 있는 타입 : Animal
	cout << t2.name() << endl;			   // class Animal
}