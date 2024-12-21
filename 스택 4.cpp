#include <iostream> 
using namespace std;

// 엇.. 그런데 갑자기 큐가 필요해졌습니다.
// push와 pop 모두 메소드 오버로딩으로 인해 사용 가능하지만,
// 코드 간의 가독성이 매우 떨어지게 되었습니다. 

struct Queue {
	int queue[16];
	int head;
	int tail;
};
void push(Queue& q, int value) {
	q.queue[q.tail] = value;
	q.tail = (q.tail + 1) % 16;
}
int pop(Queue& q) { 
	int value = q.queue[q.head];
	q.head = (q.head + 1) % 16;
	return value;
}

struct Stack {
	int stack[16];
	int sp;
};

void push(Stack& s, int value) { s.stack[s.sp++] = value; }
int pop(Stack& s) { return s.stack[--s.sp]; }

int main() {
	Stack s = { 0, };
	Queue q = { 0, };

	push(s, 10); push(q, 10);
	push(s, 20); push(q, 20);
	push(s, 30); push(q, 30);

	cout << pop(s) << " " << pop(q) << endl;
	cout << pop(s) << " " << pop(q) << endl;
	cout << pop(s) << " " << pop(q) << endl;
}