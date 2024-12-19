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

// Animal�� Dog Ŭ���������� ���� �Լ��� �����Ƿ�
// ���� �Լ� ���̺��� �ִ�.
// ����, ��Ÿ�ӿ��� �� ��ü�� ������ �� �ִ�. 
int main() {
	Animal a;
	Dog d;

	cout << typeid(Animal).name() << endl; // class Animal
	cout << typeid(a).name() << endl;	   // class Animal

	cout << typeid(Dog).name() << endl;    // class Dog
	cout << typeid(d).name() << endl;      // class Dog

	Animal* p = &a;
	const type_info& t1 = typeid(*p);	   // p�� ����Ű�� �ִ� Ÿ�� : Animal
	cout << t1.name() << endl;			   // class Animal

	p = &d;
	const type_info& t2 = typeid(*p);	   // p�� ����Ű�� �ִ� Ÿ�� : Dog (���� ����)
	cout << t2.name() << endl;			   // class Dog
}