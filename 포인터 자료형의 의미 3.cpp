#include <iostream>;
using namespace std;

int main() {
	char a[16] = { 0x11, 0x22, 0x33, 0x44,
				   0x55, 0x66, 0x77, 0x88,
				   0x99, 0xAA, 0xBB, 0xCC,
				   0xDD, 0xEE, 0xFF, 0x00 };
	int* i = (int*)a; // 4 bytes �� �д� ������ 

	cout << hex;
	cout << (void*)(&a[0]) << endl;			// �迭 a�� 0��° ������ �ּ� 
	cout << (void*)(&a[4]) << endl;			// �迭 a�� 4��° ������ �ּ� 
	cout << (void*)(&a[8]) << endl;			// �迭 a�� 8��° ������ �ּ� 
	cout << (void*)(&a[12]) << endl;		// �迭 a�� 12��° ������ �ּ� 

	cout << "==============" << endl;
	cout << i + 0 << endl;					// �迭 a�� 0��° ������ �ּ� 
	cout << i + 1 << endl;					// �迭 a�� 4��° ������ �ּ� 
	cout << i + 2 << endl;					// �迭 a�� 8��° ������ �ּ� 
	cout << i + 3 << endl;					// �迭 a�� 12��° ������ �ּ� 
}