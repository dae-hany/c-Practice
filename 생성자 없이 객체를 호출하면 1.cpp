#include <iostream>
using namespace std;

class B {
public:
	B() { cout << "������ ȣ��" << endl; }
	void goo() { cout << "B::goo" << endl; }
};

int main() {
	B* p = static_cast<B*>(malloc(sizeof(B))); // ������ ȣ�� x 
	p->goo();	// B::goo ��� 
}