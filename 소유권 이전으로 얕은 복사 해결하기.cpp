#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
public:
	smartptr(T* p = 0) : ptr(p) {}
	smartptr(smartptr& other) : ptr(other.ptr) { other.ptr = nullptr; } // �̶�, other.ptr�� �����ؾ� �ϹǷ� const ���� x
	~smartptr() { delete ptr; }

	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

int main() {
	smartptr<int> p1 = new int;
	*p1 = 10;
	cout << *p1 << endl;

	smartptr<int> p2 = p1;
	// cout << *p1 << endl; // �������� �����Ǿ����Ƿ� ���� p1�� nullptr�̴�. 
	cout << *p2 << endl;
}