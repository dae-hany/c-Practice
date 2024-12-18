#include <iostream>
using namespace std;

class member {
private:
	int id;
public:
	member(int id) : id(id) {} 
	void print() { cout << id << endl; }
};

template <typename T> class smartptr {
private:
	T* ptr;
public:
	smartptr(T* ptr = 0) : ptr(ptr) { cout << "동적 메모리 할당" << endl; }
	~smartptr() { cout << "동적 메모리 해제" << endl; delete ptr; }
	T& operator*() { return *ptr; } // * 연산자 오버로딩 : 값 할당 가능
	T* operator->() { return ptr; } // -> 연산자 오버로딩 : 구조체나 클래스를 가리킬 수 있음 
};
int main() {
	smartptr<member> ptr = new member(10);
	ptr->print();
}