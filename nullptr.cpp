#include <iostream>
using namespace std;

// nullptr은 상수 클래스입니다!
const class my_nullptr {
private:
	void operator&() const {}  // nullptr에 대한 주소 연산을 제한 
public:
	// 모든 기본 타입 포인터(int *, double *, char * 등..)에 대한 변환 연산자 지정 
	// 포인터에 대한 0을 반환 ===> nullptr
	template <typename T> 
	operator T* () const {return 0;}

	// 모든 멤버 포인터에 대한 변환 연산자 지정 
	// 포인터에 대한 0을 반환 ===> nullptr 
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
	func(0); // func(int n) 호출
	func(np); // func(char *p) 호출 
}