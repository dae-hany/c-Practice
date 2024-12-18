#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
	smartptr(const smartptr& other) {} // 1. ���� �����ڸ� private�� ���� -> ���� ��ü�� ���� 
	void operator=(const smartptr& other) {} // 2. ���� �����ڵ� private�� ���� -> ���� ������ ��� ����
public:
	smartptr(T* p = 0) : ptr(p) {}
	~smartptr() { delete ptr; }
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

int main() {
	smartptr<int> p1 = new int(10);
	cout << *p1 << endl;

	// smartptr<int> p2(p1); ���� ��ü�� �Ұ����� 
	// smartptr<int> p2 = p1; ���� ������ ��� �Ұ��� 
}