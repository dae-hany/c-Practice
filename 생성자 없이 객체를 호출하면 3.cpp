#include <iostream>
using namespace std;

class B {
public:
	B() { cout << "������ ȣ��" << endl; }
	virtual void goo() { cout << "B::goo" << endl; } // �����Լ� 
};

int main() {
	B* p = static_cast<B*>(malloc(sizeof(B))); // ������ ȣ�� o
	new (p) B; // placement new => ������ ȣ�� => vtable �ʱ�ȭ 
	p->goo();	// B::goo ��� 
}