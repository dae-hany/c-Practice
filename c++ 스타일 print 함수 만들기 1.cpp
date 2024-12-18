#include <iostream> 
using namespace std;

// 함수 오버로딩
void print(const char* str) { // "문자열 리터럴" = const char[], const char* 이므로 const 설정해줘야 함 
	printf("%s ", str);
}

void print(int i) {
	printf("%d ", i);
}

void print(double d) {
	printf("%f ", d);
}

int main() {
	print("hello"); // "hello" 출력됨
	print(1234); // 1234 출력됨
	print(3.14); // 3.14 출력됨 
}