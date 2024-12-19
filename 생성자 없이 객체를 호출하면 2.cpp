#include <iostream>
using namespace std;

class B {
public:
	B() { cout << "생성자 호출" << endl; }
	virtual void goo() { cout << "B::goo" << endl; } // 가상함수 
};

int main() {
	B* p = static_cast<B*>(malloc(sizeof(B))); // 생성자 호출 x 
	p->goo();	// 출력되지 않음.  
}

// 생성자가 호출될 때, 가상 함수 테이블(vtable)이 초기화됨.
// 그런데, 생성자가 호출되지 않았기 때문에, vtable이 없음.
// 따라서 virtual 함수를 호출할 수 없음. 