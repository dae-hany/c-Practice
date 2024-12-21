#include <iostream>;
using namespace std;

int main() {
	char a[16] = { 0x11, 0x22, 0x33, 0x44,
				   0x55, 0x66, 0x77, 0x88,
				   0x99, 0xAA, 0xBB, 0xCC,
				   0xDD, 0xEE, 0xFF, 0x00 };
	int* i = (int*)a; // 4 bytes 씩 읽는 포인터 

	cout << hex;
	cout << i[0] << endl;		// 44332211
	cout << i[1] << endl;		// 88776655
	cout << i[2] << endl;		// CCBBAA99
	cout << i[3] << endl;		//   FFEEDD

	cout << "==============" << endl;
	// 포인터가 곧 배열인 이유
	cout << *(i + 0) << endl;	// 44332211
	cout << *(i + 1) << endl;	// 88776655
	cout << *(i + 2) << endl;	// CCBBAA99
	cout << *(i + 3) << endl;	//   FFEEDD
}