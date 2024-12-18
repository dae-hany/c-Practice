#include <iostream>
using namespace std;
template <typename T>
class smartptr {
private:
	T* ptr;
	
	// ���� ������ private ���� 
	void operator=(const smartptr&);
public:
	smartptr(T* p = 0) : ptr(p) { }
	~smartptr() { delete ptr; }
	smartptr(const smartptr& p) = delete; // ��� c++������ = delete ������ ���� ���縦 ����
	T& operator* () { return *ptr; }
	T* operator-> () { return ptr; }
};

int main() {
	smartptr<int> p1(new int);
	*p1 = 10;
	// smartptr<int> p2(p1); // ���簡 �� �˴ϴ�
}