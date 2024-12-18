#include <iostream> 
using namespace std;

class myPrint {
private:
	int len;
public:
	// 문자열 출력
	void print(const char* str) { len += printf("%s ", str); }

	// 정수 출력 
	void print(int i) { len += printf("%d ", i); }

	// 실수 출력 
	void print(double d) { len += printf("%f ", d); }

	// function chaining + 연산자 오버로딩 : 문자열 출력 
	myPrint& operator<< (const char* str) { print(str); return *this; }

	// function chaining + 연산자 오버로딩 : 정수 출력 
	myPrint& operator<< (int i) { print(i); return *this; }

	// function chaining + 연산자 오버로딩 : 실수 출력 
	myPrint& operator<< (double d) { print(d); return *this; }

	// function chaining + 연산자 오버로딩 : endl() 함수 포인터 
	myPrint& operator<< (void (*f)()) { f(); return *this; }
};

// 전역 endl 함수
void endl() { printf("\n"); }

int main() {
	myPrint p;

	p << "hello" << 1234 << 3.14 << endl; // 정상적으로 작동!

	p << "hello" << endl << 1234; // 정상적으로 작동!
}