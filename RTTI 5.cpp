#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {} // 가상 소멸자 
	void cry() { cout << "crrr" << endl; }
};

class Dog : public Animal {
public:
	int color;
};

void foo(Animal* p) {
	const type_info& t1 = typeid(*p);
	const type_info& t2 = typeid(Dog);

	// 만약 포인터 p가 가리키는 객체가 Dog 객체라면 
	if (t1 == t2) { // if (typeid(*p) == typeid(Dog))
		cout << "p is a dog" << endl;
		Dog* pDog = dynamic_cast<Dog*>(p); // Animal* 를 Dog* 로 다운 캐스팅 (dynamic_cast : 안전한 다운 캐스팅만 허용)
		pDog->color = 1;
		cout << "강아지 색깔 바꾸기 성공" << endl;
	}

	p->cry();
}

int main() {
	Animal a;
	Dog d;

	foo(&a);
	cout << endl;
	foo(&d);
}