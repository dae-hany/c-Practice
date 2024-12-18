#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
public:
	smartptr(T* ptr = 0) : ptr(ptr) { cout << "동적 메모리 할당" << endl; }
	~smartptr() { cout << "동적 메모리 해제" << endl; delete ptr; }
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

void func() {
	smartptr<int> p1 = new int;
	*p1 = 10;

	// p2와 p1이 동일한 주소를 가리키게 됨 
	smartptr<int> p2 = p1;
	
	cout << *p1 << endl;
	cout << *p2 << endl;

	/* 
	1. 함수가 종료되면서 p1과 p2가 소멸할 때, 파괴자의 delete가 실행됨 
	2. p1과 p2가 가리키는 위치가 동일하므로 동일한 주소가 두 번 delete 되는 이중 삭제가 발생함. 
	3. 따라서 오류 
	*/
}

int main() {
	func();
}