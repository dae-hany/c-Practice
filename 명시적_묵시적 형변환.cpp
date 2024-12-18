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
	int j =i; // 묵시적 형변환 

	int* p =  (int*) & i; // 명시적 형변환 
	cout << *p << endl;

	smartptr<int> p1;
	p1 = (int*)i; // 1234를 "주소로써" 전달
	cout << *p1 << endl; // 1234 주소에는 아무것도 없슴다.
}