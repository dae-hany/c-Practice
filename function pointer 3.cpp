#include <iostream>;
using namespace std;

int sum(int a, int b) {
	return a + b;
}

void print(string str) {
	cout << str << endl;
}

int main() {
	// 함수 포인터 선언 
	int (*ptr_sum)(int, int);
	void (*ptr_print)(string);

	// 함수 가리키기 
	ptr_sum = sum;
	ptr_print = print;

	// 함수 포인터로 함수 호출하기
	cout << ptr_sum(10, 20) << endl;
	ptr_print("hello");
}