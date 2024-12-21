#include <iostream> 
using namespace std;

// 그래서 Stack 구조체의 멤버 함수로 push 와 pop을 정의했습니다. 
struct Stack {
	int stack[16];
	int sp;

	void push(int value) { stack[sp++] = value; }
	int pop() { return stack[--sp]; }
};

int main() {
	Stack s = { 0, };

	s.push(10); s.push(20); s.push(30);

	// 그런데, 구조체 내부 변수에 직접 접근할 수 있다는 문제가 있습니다.
	s.sp = -100;
	s.stack[13] = 40;
}