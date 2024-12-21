#include <iostream>
using namespace std;

// �ڵ� �ߺ��� ���ְ��� ����ü�� Ȱ���߽��ϴ�. 
struct Stack {
	int stack[16];
	int sp;
};

void push(Stack& s, int value) { s.stack[s.sp++] = value; }
int pop(Stack& s) { return s.stack[--s.sp]; }

int main() {
	Stack s1 = { 0, };
	Stack s2 = { 0, };
	Stack s3 = { 0, };
	push(s1, 10);
	push(s2, 20);
	push(s3, 30);
	cout << pop(s1) << endl;
	cout << pop(s2) << endl;
	cout << pop(s3) << endl;
}


