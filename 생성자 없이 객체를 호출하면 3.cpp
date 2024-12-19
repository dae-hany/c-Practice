#include <iostream>
using namespace std;

class B {
public:
	B() { cout << "생성자 호출" << endl; }
	virtual void goo() { cout << "B::goo" << endl; } // 가상함수 
};

int main() {
	B* p = static_cast<B*>(malloc(sizeof(B))); // 생성자 호출 o
	new (p) B; // placement new => 생성자 호출 => vtable 초기화 
	p->goo();	// B::goo 출력 
}