#include <iostream>
using namespace std;

template <typename T>
class smartptr {
private:
	T* ptr;
public:
	smartptr(T* p = 0) : ptr(p) {}
	~smartptr() { delete ptr; }

	// 복사 생성자 : 깊은 복사
	smartptr(const smartptr& p) {
		ptr = new T;
		memcpy(ptr, p.ptr, sizeof(T));
	}

	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

int main() {
	smartptr<int> p1 = new int;
	*p1 = 10;

	smartptr<int> p2 = p1;
	*p2 = 20;
	cout << *p1 << endl; // 10 출력 
	cout << *p2 << endl; // 20 출력 

	*p1 = 30;
	cout << *p1 << endl; // 30 출력 
	cout << *p2 << endl; // 20 출력 
}