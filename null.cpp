#include <iostream> 
using namespace std;
// 아래 코드가 있든 없든 NULL은 정수 0 취급 
// #define NULL 0 

void func(int n) {
	cout << "void func(int) called" << endl;
}

void func(char* p) {
	cout << "void func(char*) called" << endl;
}

int main() {
	func(0); // func(int n) 호출 
	func(NULL); // NULL은 사실 int 0이므로 func(int n) 호출 
}
