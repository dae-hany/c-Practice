#include <iostream>
using namespace std;

// 일단 저는 스택이 한 개 필요하기 때문에 이렇게 코딩했습니다. 

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