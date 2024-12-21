#include <iostream>;
using namespace std;

// 4016 bytes 크기의 구조체 
struct Big {
	double a;
	int b[1000];
	long c;
};

// 구조체를 통째로 전달 (call by value) -> 메모리 낭비 심함 
void func(Big value){
	cout << sizeof(value) << endl; // 2. 4016 출력 
	cout << value.a << endl; // 3. 100 출력 
}

int main() {
	Big mystruct;
	mystruct.a = 100;

	cout << sizeof(mystruct) << endl; // 1. 4016 출력 
	func(mystruct); // 구조체를 통째로 전달 
}