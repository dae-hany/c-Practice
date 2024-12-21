#include <iostream>;
using namespace std;

int main() {
	long long ll = 0x8899AABBCCDDEEFF;			// 8 bytes 
	char* ptr = (char*)&ll;						// 1 byte�� ���� ����

	cout << hex;
	cout << (void*)ptr << endl;					// ll�� �ּ� ��� 
	cout << (void*)(ptr + 4) << endl;			// ll�� �ּҿ� 4 bytes��ŭ ������ �ּ� ��� 

	cout << *((int*)(ptr + 0)) << endl;			// ccddeeff ���, ptr[0]���� (int *) => 4 bytes �б�
	cout << *((int*)(ptr + 3)) << endl;			// 99aabbcc ���, ptr[3]���� (int *) => 4 bytes �б�
}