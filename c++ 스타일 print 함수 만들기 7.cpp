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
};

// 전역 endl 함수
void endl() { printf("\n"); }

int main() {
	myPrint p;

	// 에러 발생! : operator<< 에서 endl()을 인자로 하는 함수가 없다
	p << "hello" << 1234 << 3.14 << endl();
}