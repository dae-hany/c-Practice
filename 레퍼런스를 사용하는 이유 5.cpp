#include <iostream> 
using namespace std;

// 레퍼런스를 활용하면 array decay 현상도 피할 수 있다.
void func(int(&ref)[4]) {
	cout << sizeof(ref) << endl; // 2. 16 출력 
	cout << ref[3] << endl;		 // 3. 4 출력 
}

int main() {
	int a[4] = { 1, 2, 3, 4 }; // 16 bytes 

	cout << sizeof(a) << endl; // 1. 16 출력
	func(a);
}