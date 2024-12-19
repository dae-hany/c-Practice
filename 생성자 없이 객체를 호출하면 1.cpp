#include <iostream>
using namespace std;

class B {
public:
	B() { cout << "생성자 호출" << endl; }
	void goo() { cout << "B::goo" << endl; }
};

int main() {
	B* p = static_cast<B*>(malloc(sizeof(B))); // 생성자 호출 x 
	p->goo();	// B::goo 출력 
}