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
	포인터 p는 "컴파일 시점에서" A를 가리킨다. 따라서 foo(int a = 10)을 가리킨다. 
	하지만, virtual(동적 바인딩)으로 인해 "런타임 시점에서" 객체 B를 찾게 된다. 
	따라서, 함수는 { cout << "B : " << a << endl; } 이 실행된다. 
	즉, 결과는 "B : 10"
	물론, 코드 가독성이 개떡같기 때문에, 가상 함수에 default parameter를 설정하는 것은 비추.
	*/
}