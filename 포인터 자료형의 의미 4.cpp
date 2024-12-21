#include <iostream>;
using namespace std;

int main() {
	long long ll = 0x8899AABBCCDDEEFF;			// 8 bytes 
	char* ptr = (char*)&ll;						// 1 byte씩 접근 가능

	cout << hex;
	cout << (void*)ptr << endl;					// ll의 주소 출력 
	cout << (void*)(ptr + 4) << endl;			// ll의 주소에 4 bytes만큼 증가한 주소 출력 

	cout << *((int*)(ptr + 0)) << endl;			// ccddeeff 출력, ptr[0]에서 (int *) => 4 bytes 읽기
	cout << *((int*)(ptr + 3)) << endl;			// 99aabbcc 출력, ptr[3]에서 (int *) => 4 bytes 읽기
}