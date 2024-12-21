#include <iostream>;
using namespace std;

int main() {
	char a[16] = { 0x11, 0x22, 0x33, 0x44,
				   0x55, 0x66, 0x77, 0x88,
				   0x99, 0xAA, 0xBB, 0xCC,
				   0xDD, 0xEE, 0xFF, 0x00 };

	// 배열의 이름은 곧 첫 번째 원소의 주소 -> a = &a[0]
	char* c = (char*)a;						// 포인터 c는 1 byte씩 읽습니다.
	int* i = (int*)a;						// 포인터 i는 4 bytes씩 읽습니다.
	long long* ll = (long long*)a;			// 포인터 ll은 8 bytes씩 읽습니다.

	cout << hex;
	cout << (int)*c << endl;			// 11 출력 
	cout << *i << endl;					// 44332211 출력 
	cout << *ll << endl;				// 8877665544332211 출력 
}