#include <iostream>;
using namespace std;

int main() {
	long long ll = 0x8899AABBCCDDEEFF;				// 8 bytes 
	int* ptr = (int*)&ll;							// 4 bytes�� ���� ���� 

	cout << hex;
	cout << ptr << endl;							// ll �ּ� ��� 
	cout << &ptr[0] << endl;						// ll �ּ� ��� 

	cout << ptr + 1 << endl;						// ll �ּ� + 4 bytes ��� 
	cout << &ptr[1] << endl;						// ll �ּ� + 4 bytes ��� 

	cout << *ptr << endl;							// ccddeeff ���
	cout << ptr[0] << endl;							// ccddeeff ���

	cout << *ptr + 1 << endl;						// ccddeeff ��� ����� + 1�� �ϹǷ� ccddef00
	cout << ptr[0] + 1 << endl;						// ccddeeff ��� ����� + 1�� �ϹǷ� ccddef00

	cout << *(ptr + 1) << endl;						// 8899aabb ��� 
	cout << ptr[1] << endl;							// 8899aabb ��� 
}