#include <iostream> 
using namespace std;

// �׷��� Stack ����ü�� ��� �Լ��� push �� pop�� �����߽��ϴ�. 
struct Stack {
	int stack[16];
	int sp;

	void push(int value) { stack[sp++] = value; }
	int pop() { return stack[--sp]; }
};

int main() {
	Stack s = { 0, };

	s.push(10); s.push(20); s.push(30);

	// �׷���, ����ü ���� ������ ���� ������ �� �ִٴ� ������ �ֽ��ϴ�.
	s.sp = -100;
	s.stack[13] = 40;
}