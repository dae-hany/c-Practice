#include <iostream> 
using namespace std;

int len;

void print(const char* str) {
	len += printf("%s ", str);
}

void print(int i) {
	len += printf("%d ", i);
}

void print(double d) {
	len += printf("%f ", d);
}

int main() {
	print("hello"); // "hello " 출력됨
	print(1234); // "1234 " 출력됨
	print(3.14); // "3.140000 " 출력됨 

	printf("%d ", len); // 출력된 문자열의 길이 20 출력 
}
