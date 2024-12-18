#include <iostream>
using namespace std;
template <typename T>
class smartptr {
private:
	T* ptr;
	
	// 대입 연산자 private 선언 
	void operator=(const smartptr&);
public:
	smartptr(T* p = 0) : ptr(p) { }
	~smartptr() { delete ptr; }
	smartptr(const smartptr& p) = delete; // 모던 c++에서는 = delete 구문을 통해 복사를 막음
	T& operator* () { return *ptr; }
	T* operator-> () { return ptr; }
};

int main() {
	smartptr<int> p1(new int);
	*p1 = 10;
	// smartptr<int> p2(p1); // 복사가 안 됩니다
}