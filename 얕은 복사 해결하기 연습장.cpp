#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
	// int* ref; // 참조 계수 
	smartptr(const smartptr& other) {} // 복사 금지 
	void operator=(const smartptr& other) {} // 복사 금지 
public:
	smartptr(T* p = 0) : ptr(p) {} 
	// smartptr(T* p = 0) : ptr(p) { ref = new int(1);  }
	// ~smartptr() { if (--(*ref) == 0) {delete ptr; delete ref;} }
	// smartptr(const smartptr& other) : ptr(other.ptr) { ptr = new T; memcpy(ptr, other.ptr, sizeof(T)); } 깊은 복사로 해결 
	// smartptr(const smartptr& other) : ptr(other.ptr) {*ref ++;} // 참조 계수로 해결 
	// smartptr(smartptr& other) : ptr(other.ptr) { other.ptr = nullptr; } // 소유권 이전으로 해결 
	~smartptr() { delete ptr; }
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

int main() {
	smartptr<int> p1 = new int(10);
	cout << *p1 << endl;
}