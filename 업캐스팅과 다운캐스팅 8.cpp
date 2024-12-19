#include <iostream>
using namespace std;

class A {
private:
	int a;
	// virtual 로 인해 보이지 않는 8 bytes 짜리 vptr 존재 
public:
	virtual void foo(int a = 10) { cout << "A : " << a << endl; }
};

class B : public A {
private:
	int b;
	// virtual 로 인해 보이지 않는 8 bytes 짜리 vptr 존재 
public:
	virtual void foo(int a = 20) { cout << "B : " << b << endl; }
};

int main() {
	cout << sizeof(A) << endl; // 16 bytes (4 + 8 + 패딩) 
	cout << sizeof(B) << endl; // 24 bytes (자기 자신 12, 부모 12 )
}