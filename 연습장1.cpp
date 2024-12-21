#include <iostream>
using namespace std;

template <typename T> class Stack {
private:
	T stack[16];
	int sp;
public:
	Stack() : sp(0) {} 
	void push(T value) { stack[sp++] = value; }
	T pop() { return stack[--sp]; }
};

int main() {
	Stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << endl; // 1. 30 출력 
	cout << s.pop() << endl; // 2. 20 출력 
	cout << s.pop() << endl; // 3. 10 출력 
}