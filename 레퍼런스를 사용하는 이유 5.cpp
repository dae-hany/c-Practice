#include <iostream> 
using namespace std;

// ���۷����� Ȱ���ϸ� array decay ���� ���� �� �ִ�.
void func(int(&ref)[4]) {
	cout << sizeof(ref) << endl; // 2. 16 ��� 
	cout << ref[3] << endl;		 // 3. 4 ��� 
}

int main() {
	int a[4] = { 1, 2, 3, 4 }; // 16 bytes 

	cout << sizeof(a) << endl; // 1. 16 ���
	func(a);
}