#include <iostream>
using namespace std;

class A {
private:
	int a;
public:
	void foo(int a = 10) { cout << "A : " << a << endl; }
};

class B : public A {
private:
	int b;
public:
	void foo(int a = 20) { cout << "B : " << b << endl; }
};

int main() {
	cout << sizeof(A) << endl; // 4 bytes 
	cout << sizeof(B) << endl; // 8 bytes (자기 자신 4, 부모 4)
}