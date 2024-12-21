#include <iostream>;
using namespace std;

// 함수는 Code란 메모리 영역에 저장됩니다. 
void func() {
	cout << "I am Func()" << endl;
}

void gunc() {
	cout << "I am Gunc()" << endl;
}

int main() {
	// 함수의 이름은 곧 주소입니다. 
	cout << func << endl;
	cout << &func << endl;

	cout << gunc << endl;
	cout << &gunc << endl;
}