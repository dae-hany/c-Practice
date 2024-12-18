#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
	int* ref;
public:
	smartptr(T* ptr = 0) : ptr(ptr) { ref = new int(1); }
	smartptr(const smartptr& other) : ptr(other.ptr), ref(other.ptr) { (*ref)++; }
	~smartptr() {
		if (--(*ref) == 0) { delete ptr; delete ref; }
	}
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

int main() {
	smartptr<int> p1 = new int;
	*p1 = 10;

	smartptr<int> p2 = p1;
	*p2 = 20;
	cout << *p1 << endl; // 20 출력 
	cout << *p2 << endl; // 20 출력 

	*p1 = 30;
	cout << *p1 << endl; // 30 출력 
	cout << *p2 << endl; // 30 출력 
}
