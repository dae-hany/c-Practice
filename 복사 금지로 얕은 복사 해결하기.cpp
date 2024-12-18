#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
	smartptr(const smartptr& other) {} // 1. 복사 생성자를 private에 선언 -> 복사 자체를 막음 
	void operator=(const smartptr& other) {} // 2. 대입 연산자도 private에 선언 -> 대입 연산자 사용 막음
public:
	smartptr(T* p = 0) : ptr(p) {}
	~smartptr() { delete ptr; }
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

int main() {
	smartptr<int> p1 = new int(10);
	cout << *p1 << endl;

	// smartptr<int> p2(p1); 복사 자체가 불가능함 
	// smartptr<int> p2 = p1; 대입 연산자 사용 불가능 
}