#include <iostream> 
using namespace std;

class Stack {
private:
	int sp;
	int stack[16];
public:
	Stack();
	void push(int value);
	int pop();
};

Stack::Stack() : sp(0) {}
void Stack::push(int value) { stack[sp++] = value; }
int Stack::pop() { return stack[--sp]; }

int main() {
	Stack s;
	s.push(10); s.push(20); s.push(30);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
}