#include <iostream>
#include <memory> // for shared_ptr
using namespace std;

void foo(int* p) {
	cout << "delete p" << endl;
	delete p;
}

// shared_ptr -> 참조 계수 기반 smartptr 
int main() {
	shared_ptr<int> p1(new int); 
	*p1 = 10;

	cout << *p1 << endl; // 10
	cout << p1.use_count() << endl; // 1

	shared_ptr<int> p2(p1);
	cout << *p2 << endl; // 10
	cout << p2.use_count() << endl; // 2 

	shared_ptr<int> p3(new int, foo);
	cout << p3.use_count() << endl; // 1 , delete p 
}