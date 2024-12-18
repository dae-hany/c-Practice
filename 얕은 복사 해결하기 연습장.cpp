#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
	// int* ref; // ���� ��� 
	smartptr(const smartptr& other) {} // ���� ���� 
	void operator=(const smartptr& other) {} // ���� ���� 
public:
	smartptr(T* p = 0) : ptr(p) {} 
	// smartptr(T* p = 0) : ptr(p) { ref = new int(1);  }
	// ~smartptr() { if (--(*ref) == 0) {delete ptr; delete ref;} }
	// smartptr(const smartptr& other) : ptr(other.ptr) { ptr = new T; memcpy(ptr, other.ptr, sizeof(T)); } ���� ����� �ذ� 
	// smartptr(const smartptr& other) : ptr(other.ptr) {*ref ++;} // ���� ����� �ذ� 
	// smartptr(smartptr& other) : ptr(other.ptr) { other.ptr = nullptr; } // ������ �������� �ذ� 
	~smartptr() { delete ptr; }
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

int main() {
	smartptr<int> p1 = new int(10);
	cout << *p1 << endl;
}