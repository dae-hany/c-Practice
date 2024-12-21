#include <iostream>;
using namespace std;

int main() {
	long long ll = 0x1122334455667788;
	int* ptr = (int*)&ll;

	cout << hex;
	cout << *(ptr + 0) << endl; // 55667788
	cout << *(ptr + 1) << endl; // 11223344

	cout << "-------------" << endl;

	cout << ptr[0] << endl;		// 55667788
	cout << ptr[1] << endl;		// 11223344
}