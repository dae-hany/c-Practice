#include <iostream>
using namespace std;

template <typename T> class smartptr {
private:
	T* ptr;
public:
	smartptr(T* ptr = 0) : ptr(ptr) { cout << "동적 메모리 할당" << endl; }
	~smartptr() { cout << "동적 메모리 해제" << endl; delete ptr; }

	T& operator*() { return *ptr; }
};

int main() {
	smartptr<int> ptr = new int;
	*ptr = 1234;
	cout << *ptr << endl;

	smartptr<double> qtr = new double;
	*qtr = 3.14;
	cout << *qtr << endl;
}