#include <iostream>
using namespace std;

// �ϴ� ���� ������ �� �� �ʿ��ϱ� ������ �̷��� �ڵ��߽��ϴ�. 

int stack[16];
int sp = 0;

void push(int value) { stack[sp++] = value; }
int pop() { return stack[--sp]; }

int main() {
	push(10);
	push(20);
	push(30);

	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
}