#include <iostream>
using namespace std;

class A {
public:
	virtual void foo(int a = 10) { cout << "A : " << a << endl; }
};

class B : public A {
public:
	virtual void foo(int a = 20) { cout << "B : " << a << endl; }
};

int main() {
	A* p = new B;
	p->foo();
	/* 
	������ p�� "������ ��������" A�� ����Ų��. ���� foo(int a = 10)�� ����Ų��. 
	������, virtual(���� ���ε�)���� ���� "��Ÿ�� ��������" ��ü B�� ã�� �ȴ�. 
	����, �Լ��� { cout << "B : " << a << endl; } �� ����ȴ�. 
	��, ����� "B : 10"
	����, �ڵ� �������� �������� ������, ���� �Լ��� default parameter�� �����ϴ� ���� ����.
	*/
}