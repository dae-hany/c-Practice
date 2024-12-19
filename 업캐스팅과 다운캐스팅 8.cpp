#include <iostream>
using namespace std;

class A {
private:
	int a;
	// virtual �� ���� ������ �ʴ� 8 bytes ¥�� vptr ���� 
public:
	virtual void foo(int a = 10) { cout << "A : " << a << endl; }
};

class B : public A {
private:
	int b;
	// virtual �� ���� ������ �ʴ� 8 bytes ¥�� vptr ���� 
public:
	virtual void foo(int a = 20) { cout << "B : " << b << endl; }
};

int main() {
	cout << sizeof(A) << endl; // 16 bytes (4 + 8 + �е�) 
	cout << sizeof(B) << endl; // 24 bytes (�ڱ� �ڽ� 12, �θ� 12 )
}