#include <iostream>
using namespace std;

class B {
public:
	B() { cout << "������ ȣ��" << endl; }
	virtual void goo() { cout << "B::goo" << endl; } // �����Լ� 
};

int main() {
	B* p = static_cast<B*>(malloc(sizeof(B))); // ������ ȣ�� x 
	p->goo();	// ��µ��� ����.  
}

// �����ڰ� ȣ��� ��, ���� �Լ� ���̺�(vtable)�� �ʱ�ȭ��.
// �׷���, �����ڰ� ȣ����� �ʾұ� ������, vtable�� ����.
// ���� virtual �Լ��� ȣ���� �� ����. 