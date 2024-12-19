#include <iostream> 
using namespace std;

class Animal {
public:
	virtual void cry() { cout << "crrrr" << endl; }
};

class Dog : public Animal {
public:
	int color;
};

void foo(Animal* p) {
	p->cry();
}

// Animal과 Dog 클래스에서는 가상 함수가 있으므로
// 가상 함수 테이블이 있다.
// 따라서, 런타임에서 두 객체를 구분할 수 있다. 
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
	const type_info& t2 = typeid(*p);	   // p가 가리키고 있는 타입 : Dog (구분 가능)
	cout << t2.name() << endl;			   // class Dog
}