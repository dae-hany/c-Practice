#include <iostream> 
using namespace std;

class Animal {
public:
	void cry() { cout << "crrrr" << endl; }
};

class Dog : public Animal {
public:
	int color; // ����, �������� ���� �ٲٰ� �ʹٸ� ��� �ؾ� �ұ��? ��� �������� ������ �� �������?
};

void foo(Animal* p) {
	p->cry();
}

int main() {
	Animal a; foo(&a);
	Dog d; foo(&d);
}