#include <iostream> 
using namespace std;

// 스택이 3개가 필요하게 되었습니다.
// 코드 중복이 많이 발생하게 됩니다. 

int stack1[16];
int sp1;
int stack2[16];
int sp2;
int stack3[16];
int sp3;

void push1(int value) { stack1[sp1++] = value; }
int pop1() { return stack1[--sp1]; }

void push2(int value) { stack2[sp2++] = value; }
int pop2() { return stack2[--sp2]; }

void push3(int value) { stack3[sp3++] = value; }
int pop3() { return stack3[--sp3]; }

int main() {
	push1(10);
	push2(20);
	push3(30);
	cout << pop1() << endl;
	cout << pop2() << endl;
	cout << pop3() << endl;
}