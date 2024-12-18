#include <iostream>
using namespace std;

// nullptr�� ��� Ŭ�����Դϴ�!
const class my_nullptr {
private:
	void operator&() const {}  // nullptr�� ���� �ּ� ������ ���� 
public:
	// ��� �⺻ Ÿ�� ������(int *, double *, char * ��..)�� ���� ��ȯ ������ ���� 
	// �����Ϳ� ���� 0�� ��ȯ ===> nullptr
	template <typename T> 
	operator T* () const {return 0;}

	// ��� ��� �����Ϳ� ���� ��ȯ ������ ���� 
	// �����Ϳ� ���� 0�� ��ȯ ===> nullptr 
	template<class C, class T>
	operator T C::*() const {return 0; }
};

void func(int n) {
	cout << "void func(int) called" << endl;
}

void func(char* p) {
	cout << "void func(char*) called" << endl;
}

int main() {
	my_nullptr np;
	func(0); // func(int n) ȣ��
	func(np); // func(char *p) ȣ�� 
}