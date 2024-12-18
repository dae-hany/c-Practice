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

	// 변환 연산자 지정 
	operator int* () const { return ptr; }
};

int main() {
	smartptr<int> p1(new int);
	*p1 = 10;

	int* ptr = p1;  // int *ptr = p1.operator int*(); 
	cout << *ptr << endl; // 10 출력 
}