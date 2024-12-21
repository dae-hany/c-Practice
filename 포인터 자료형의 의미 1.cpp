#include <iostream>;
using namespace std;

int main() {
	char a[16] = { 0x11, 0x22, 0x33, 0x44,
				   0x55, 0x66, 0x77, 0x88,
				   0x99, 0xAA, 0xBB, 0xCC,
				   0xDD, 0xEE, 0xFF, 0x00 };

	// �迭�� �̸��� �� ù ��° ������ �ּ� -> a = &a[0]
	char* c = (char*)a;						// ������ c�� 1 byte�� �н��ϴ�.
	int* i = (int*)a;						// ������ i�� 4 bytes�� �н��ϴ�.
	long long* ll = (long long*)a;			// ������ ll�� 8 bytes�� �н��ϴ�.

	cout << hex;
	cout << (int)*c << endl;			// 11 ��� 
	cout << *i << endl;					// 44332211 ��� 
	cout << *ll << endl;				// 8877665544332211 ��� 
}