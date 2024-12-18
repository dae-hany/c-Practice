#include <iostream> 
using namespace std;

class myPrint {
private:
	int len;
public:
	// 함수 오버로딩 : 문자열 출력
	void print(const char* str) {
		len += printf("%s ", str);
	}

	// 함수 오버로딩 : 정수 출력
	void print(int i) {
		len += printf("%d ", i);
	}

	// 함수 오버로딩 : 실수 출력 
	void print(double d) {
		len += printf("%f ", d);
	}
};

int main() {
	myPrint p;

	p.print("hello");
	p.print(1234);
	p.print(3.14);
}
