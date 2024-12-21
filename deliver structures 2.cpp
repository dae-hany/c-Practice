#include <iostream>;
using namespace std;

// 4016 bytes 크기의 구조체 
struct Big {
	double a;
	int b[1000];
	long c;
};

// 구조체 주소를 전달 (call by reference) -> 메모리 낭비 방지 
void func(Big* value) {
	cout << sizeof(value) << endl;			// 2. 8 출력 (주소니까!!)
	cout << value -> a << endl;				// 3. 100 출력 
	// cout << (*value).a << endl; 과 동치 
}

int main() {
	Big mystruct;
	mystruct.a = 100;

	cout << sizeof(mystruct) << endl;		// 1. 4016 출력 
	func(&mystruct);						// 구조체 주소를 전달 
}