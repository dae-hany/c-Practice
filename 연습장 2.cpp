#include <iostream>
using namespace std;

template <typename T> class Stack {
private:
	T stack[16];
	int sp;
public:
	Stack() {} 
	void push(T value) {}
	T pop() {}
};

Stack::Stack() : sp(0) {} 
void Stack::push(T value) {} 
T Stack::pop() {}

int main() {
	Stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << endl; // 1. 30 출력 
	cout << s.pop() << endl; // 2. 20 출력 
	cout << s.pop() << endl; // 3. 10 출력 
}