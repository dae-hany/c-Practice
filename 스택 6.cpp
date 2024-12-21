#include <iostream> 
using namespace std;

// 그래서 Stack 구조체 내부에 private과 public을 정의하였습니다.
struct Stack {
private:
	int stack[16];
	int sp;
public:
	Stack() : sp(0) {} 
	void push(int value) { stack[sp++] = value; }
	int pop() { return stack[--sp]; }
};

/*만들고 보니, 기존 구조체랑 모양이 많이 다름. => 클래스 도입*/

int main() {
	Stack s;

	s.push(10); s.push(20); s.push(30);

	// 내부 변수에 직접 접근 하는 문제를 해결하였습니다. 
	s.sp = -100;
	s.stack[13] = 40;
}