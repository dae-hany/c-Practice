#include <iostream> 
using namespace std;

class Stack {
public:
	int stack[16]; // 4 * 16 = 64 bytes
	int sp; // 4 bytes 

	Stack() : sp(0) {}

	void push(int value) {
		stack[sp++] = value;
	}

	int pop() {
		return stack[--sp];
	}
};

int main() {
	Stack s1;
	Stack s2;

	cout << sizeof(Stack) << endl; // 68 출력 
	cout << hex;
	// 멤버 변수의 주소는 서로 다르다 
	cout << "s1 객체의 스택 포인터 주소 : " << & s1.sp << endl; // 이 주소랑
	cout << "s2 객체의 스택 포인터 주소 : " << & s2.sp << endl; // 이 주소는 다름

}