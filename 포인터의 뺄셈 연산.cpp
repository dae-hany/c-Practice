#include <iostream>;
using namespace std;

int main() {
	int a = 0x11223344;
	int b = 0x55667788;

	int* ptr = (int*)&a; // �� ū �ּҸ� ����Ŵ
	int* qtr = (int*)&b; // �� ���� �ּҸ� ����Ŵ 

	cout << hex;
	cout << *ptr << endl;   // 11223344
	cout << *qtr << endl;	// 55667788

	cout << "=========" << endl;
	cout << (a + b) << endl; // 6688aacc
	// cout << ptr + qtr << endl; // �ּҳ����� ������ �Ұ��� 
	cout << ptr - qtr << endl; // �ּҳ����� ������ ����(�ּ��� ���� => 8 bytes)  
}