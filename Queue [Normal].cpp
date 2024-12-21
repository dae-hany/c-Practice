#include <iostream>
using namespace std;

class Queue {
private:
	int q[16];
	int head;
	int tail;
public:
	Queue() : head(0), tail(0) {}
	void enq(int value) { q[tail] = value; tail = (tail + 1) % 16; }
	int deq() {
		int value = q[head];
		head = (head + 1) % 16;
		return value;
	}
	int peek() {return q[head];}
};
int main() {
	Queue q;

	q.enq(10);
	q.enq(20);
	q.enq(30);

	cout << q.peek() << endl;

	cout << q.deq() << endl;
	cout << q.deq() << endl;
	cout << q.deq() << endl;
}