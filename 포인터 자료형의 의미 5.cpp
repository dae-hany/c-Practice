#include <iostream>;
using namespace std;

int main() {
	long long ll = 0x8899AABBCCDDEEFF;				// 8 bytes 
	int* ptr = (int*)&ll;							// 4 bytes씩 접근 가능 

	cout << hex;
	cout << ptr << endl;							// ll 주소 출력 
	cout << &ptr[0] << endl;						// ll 주소 출력 

	cout << ptr + 1 << endl;						// ll 주소 + 4 bytes 출력 
	cout << &ptr[1] << endl;						// ll 주소 + 4 bytes 출력 

	cout << *ptr << endl;							// ccddeeff 출력
	cout << ptr[0] << endl;							// ccddeeff 출력

	cout << *ptr + 1 << endl;						// ccddeeff 출력 결과에 + 1을 하므로 ccddef00
	cout << ptr[0] + 1 << endl;						// ccddeeff 출력 결과에 + 1을 하므로 ccddef00

	cout << *(ptr + 1) << endl;						// 8899aabb 출력 
	cout << ptr[1] << endl;							// 8899aabb 출력 
}