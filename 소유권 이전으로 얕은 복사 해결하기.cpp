#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
public:
	smartptr(T* p = 0) : ptr(p) {}
	smartptr(smartptr& other) : ptr(other.ptr) { other.ptr = nullptr; } // 이때, other.ptr에 접근해야 하므로 const 설정 x
	~smartptr() { delete ptr; }

	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

int main() {
	smartptr<int> p1 = new int;
	*p1 = 10;
	cout << *p1 << endl;

	smartptr<int> p2 = p1;
	// cout << *p1 << endl; // 소유권이 이전되었으므로 이제 p1은 nullptr이다. 
	cout << *p2 << endl;
}