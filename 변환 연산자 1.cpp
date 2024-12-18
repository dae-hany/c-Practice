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
	smartptr<int> p1(new int);
	*p1 = 10;

	int* ptr = p1; // 에러! ptr은 int 자료형을 가리키는 포인터지, smartptr을 가리키는 포인터가 아님. 
}