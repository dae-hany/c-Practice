#include <iostream>;
using namespace std;

// 4016 bytes ũ���� ����ü 
struct Big {
	double a;
	int b[1000];
	long c;
};

// ����ü �ּҸ� ���� (call by reference) -> �޸� ���� ���� 
void func(Big* value) {
	cout << sizeof(value) << endl;			// 2. 8 ��� (�ּҴϱ�!!)
	cout << value -> a << endl;				// 3. 100 ��� 
	// cout << (*value).a << endl; �� ��ġ 
}

int main() {
	Big mystruct;
	mystruct.a = 100;

	cout << sizeof(mystruct) << endl;		// 1. 4016 ��� 
	func(&mystruct);						// ����ü �ּҸ� ���� 
}