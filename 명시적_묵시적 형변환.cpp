#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
public:
	smartptr(T* p = 0) : ptr(p) {} 
	~smartptr() { delete ptr; }
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

int main() {
	long i = 1234;
	int j =i; // ������ ����ȯ 

	int* p =  (int*) & i; // ����� ����ȯ 
	cout << *p << endl;

	smartptr<int> p1;
	p1 = (int*)i; // 1234�� "�ּҷν�" ����
	cout << *p1 << endl; // 1234 �ּҿ��� �ƹ��͵� ������.
}