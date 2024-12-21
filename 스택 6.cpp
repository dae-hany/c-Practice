#include <iostream> 
using namespace std;

// �׷��� Stack ����ü ���ο� private�� public�� �����Ͽ����ϴ�.
struct Stack {
private:
	int stack[16];
	int sp;
public:
	Stack() : sp(0) {} 
	void push(int value) { stack[sp++] = value; }
	int pop() { return stack[--sp]; }
};

/*����� ����, ���� ����ü�� ����� ���� �ٸ�. => Ŭ���� ����*/

int main() {
	Stack s;

	s.push(10); s.push(20); s.push(30);

	// ���� ������ ���� ���� �ϴ� ������ �ذ��Ͽ����ϴ�. 
	s.sp = -100;
	s.stack[13] = 40;
}