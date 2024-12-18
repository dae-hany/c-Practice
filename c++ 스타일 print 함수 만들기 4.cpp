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

	// 연산자 오버로딩 : 문자열 출력 
	void operator<< (const char* str) { print(str); }

	// 연산자 오버로딩 : 정수 출력 
	void operator<< (int i) { print(i); }

	// 연산자 오버로딩 : 실수 출력 
	void operator<< (double d) { print(d); }
};

int main() {
	myPrint p;

	p << "hello";
	p << 1234;
	p << 3.14;
}