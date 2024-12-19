#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {} // ���� �Ҹ��� 
	void cry() { cout << "crrr" << endl; }
};

class Dog : public Animal {
public:
	int color;
};

void foo(Animal* p) {
	const type_info& t1 = typeid(*p);
	const type_info& t2 = typeid(Dog);

	// ���� ������ p�� ����Ű�� ��ü�� Dog ��ü��� 
	if (t1 == t2) { // if (typeid(*p) == typeid(Dog))
		cout << "p is a dog" << endl;
		Dog* pDog = dynamic_cast<Dog*>(p); // Animal* �� Dog* �� �ٿ� ĳ���� (dynamic_cast : ������ �ٿ� ĳ���ø� ���)
		pDog->color = 1;
		cout << "������ ���� �ٲٱ� ����" << endl;
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