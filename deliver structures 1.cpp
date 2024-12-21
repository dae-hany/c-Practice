#include <iostream>;
using namespace std;

// 4016 bytes ũ���� ����ü 
struct Big {
	double a;
	int b[1000];
	long c;
};

// ����ü�� ��°�� ���� (call by value) -> �޸� ���� ���� 
void func(Big value){
	cout << sizeof(value) << endl; // 2. 4016 ��� 
	cout << value.a << endl; // 3. 100 ��� 
}

int main() {
	Big mystruct;
	mystruct.a = 100;

	cout << sizeof(mystruct) << endl; // 1. 4016 ��� 
	func(mystruct); // ����ü�� ��°�� ���� 
}