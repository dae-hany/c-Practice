#include <iostream>;
using namespace std;

int main() {
	int a = 0x11223344;
	int b = 0x55667788;

	int* ptr = (int*)&a; // 더 큰 주소를 가리킴
	int* qtr = (int*)&b; // 더 작은 주소를 가리킴 

	cout << hex;
	cout << *ptr << endl;   // 11223344
	cout << *qtr << endl;	// 55667788

	cout << "=========" << endl;
	cout << (a + b) << endl; // 6688aacc
	// cout << ptr + qtr << endl; // 주소끼리의 덧셈은 불가능 
	cout << ptr - qtr << endl; // 주소끼리의 뺄셈은 가능(주소의 차이 => 8 bytes)  
}